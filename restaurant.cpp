#include "restaurant.hpp"
#include "restaurantmgr.hpp"
Restaurant::Restaurant(string name, int location, Menu* menu)
{
    this->name = name;
    this->location = location;
    this->menu = menu;
    //add to the mgr
    RestaurantMgr* restmgr = RestaurantMgr::get_restaurant_mgr();
    restmgr->add_restaurant(this);
}

