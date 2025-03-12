#include "restaurantmgr.hpp"
RestaurantMgr* RestaurantMgr::restmgr=null;

RestaurantMgr* RestaurantMgr::get_restaurant_mgr()
{
    if(restmgr==null)
    restmgr = new RestaurantMgr();
    return restmgr;

}

void RestaurantMgr::add_restaurant(Restaurant* rest)
{
    cout<<"The restaurant "<<rest->name<<" is being added"<<ed;
    restaurants[rest->name] = rest;
}