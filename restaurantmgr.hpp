#pragma once

#include "common.hpp"
#include "restaurant.hpp"

class Restaurant;

class RestaurantMgr
{
    private:
    static RestaurantMgr* restmgr;
    public:
    unordered_map<string, Restaurant*> restaurants;
    
    static RestaurantMgr* get_restaurant_mgr();
    void add_restaurant(Restaurant* restaurant);
    Restaurant* find_restaurant(string name);
};
