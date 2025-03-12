#pragma once
#include "common.hpp"
#include "dish.hpp"
#include "menu.hpp"

class Menu;
class Dish;
class Order;

class Restaurant
{
    private:
    bool inventory(vector<Dish*> stock, vector<Dish*> demand);
    public:
    string name;
    int location;
    Menu* menu;
    Restaurant(string name, int location, Menu* menu);
    bool accept_order(Order*);
    
};