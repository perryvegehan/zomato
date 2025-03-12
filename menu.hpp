#pragma once
#include "common.hpp"
class Dish;
class Menu
{
    public:
    vector<Dish*> dishes;
    Menu(Dish* dish);
    void add_dish(Dish* dish);
};