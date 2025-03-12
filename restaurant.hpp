#pragma once
#include "common.hpp"
#include "dish.hpp"
#include "menu.hpp"

class Menu;
class Dish;

class Restaurant
{
    public:
    string name;
    int location;
    Menu* menu;
    Restaurant(string name, int location, Menu* menu);
    
};