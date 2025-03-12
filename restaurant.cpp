#include "restaurant.hpp"
#include "restaurantmgr.hpp"
#include "order.hpp"
Restaurant::Restaurant(string name, int location, Menu* menu)
{
    this->name = name;
    this->location = location;
    this->menu = menu;
    //add to the mgr
    RestaurantMgr* restmgr = RestaurantMgr::get_restaurant_mgr();
    restmgr->add_restaurant(this);
}

bool Restaurant::inventory(vector<Dish*> stock, vector<Dish*> demand)
{
    for (auto i: demand)
    {
        // now it should be present
        bool isavail=false;
        for(auto j:stock)
        {
            if(i->name==j->name)
            {
                isavail = true;
                break;
            }
        }
        if(!isavail)
        return false;
    }
    return true;
}
bool Restaurant::accept_order(Order* order)
{
    // some logic on inventory
    vector<Dish*> stock = menu->dishes;
    vector<Dish*> demand = order->dishes;
    return inventory(stock,demand);
}