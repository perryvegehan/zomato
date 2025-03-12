#include "ordermgr.hpp"

#include "order_meta.hpp"
#include "order.hpp"
#include "dish.hpp"
#include "customer.hpp"
#include "customermgr.hpp"
#include "restaurant.hpp"
#include "restaurantmgr.hpp"
#include "pricingstrategy.hpp"
#include "strategymgr.hpp"
#include "dm_strategy.hpp"
#include "deliverypartner.hpp"
OrderMgr* OrderMgr::ordermgr=null;
int OrderMgr::orderid = 0;

OrderMgr* OrderMgr::get_ordermgr()
{
    if(ordermgr ==  null)
    ordermgr = new OrderMgr();
    return ordermgr;
}

void OrderMgr::recieve_order(string customername, vector<Dish*> dishes, string restname)
{
    CustomerMgr* custmgr = CustomerMgr::get_customermgr();
    RestaurantMgr* restmgr = RestaurantMgr::get_restaurant_mgr();
    Customer* customer = custmgr->find_customer(customername);
    if(customer==null)
    {
        cout<<"Sorry you need to register first"<<ed;
        return;
    }
    Restaurant* rest = restmgr->find_restaurant(restname);
    if(rest==null)
    {
        cout<<"Sorry this restaurant is not available"<<ed;
        return;
    }
    // now both are available
    // lets create a order
    orderid++;
    Order* order = new Order(orderid, customer, dishes, rest);
    if(order==null)
    {
        cout<<"Something went wrong. Please try again!"<<ed;
        return;
    }

    order->display_order();
    orders[orderid] = order;

    //Find bill
    StrategyMgr* stratmgr = StrategyMgr::get_strategymgr();
    PricingStrategy* ps = stratmgr->get_pricing_strategy(order);
    cout<<"The bill is Rs."<<ps->calculate_price(order)<<ed;


    // now restaurant to accept the order
    if (!rest->accept_order(order))
    {
        cout<<"The retaurant can't accept this order"<<ed;
        return;
    }
    cout<<"The restaurant has begun preparing the order"<<ed;
    order->set_status("Preparing");

    // now find the delivery partner
    DMStrategy* dmstrategy = stratmgr->get_delivery_matching_strategy(order);
    DeliveryPartner* partner = dmstrategy->find_delivery_partner(order);

    if (partner==null)
    {
        cout<<"No delivery partner found nearby"<<ed;
        return;
    }
    cout<<"The delivery partner is "<<partner->name<<ed;
    
}
