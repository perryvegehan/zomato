#include "order.hpp"
#include "restaurant.hpp"
#include "restaurantmgr.hpp"
#include "deliverypartner.hpp"
#include "dish.hpp"
#include "customer.hpp"

Order::Order(int id, Customer* customer,vector<Dish*> dishes, Restaurant* rest)
{
    orderid = id;
    this->customer = customer;
    this->dishes = dishes;
    this->rest = rest;
    this->partner = null;
    this->status = "Placed";
    
}

void Order::set_status(string status)
{
    this->status = status;
    cout<<"The status of order is "<<status<<ed;
}
void Order::display_order()
{
    cout<<"Mr. "<<customer->name<<" has placed an order in "<<rest->name<<ed;
    cout<<"The dishes are :"<<ed;
    for(auto i: dishes)
    {
        cout<<"*** "<<i->name<<"***"<<ed;
    }
    if(partner==null)
    {
        cout<<"The delivery partner will be assigned soon"<<ed;
    }
    else
    {
        cout<<"The delivery partner is "<<partner->name<<ed;
    }
    cout<<"The order status is "<<status<<ed;
}