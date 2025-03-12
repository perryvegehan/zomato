#include "menu.hpp"

Menu::Menu(Dish* dish)
{
    dishes.push_back(dish);
}

void Menu::add_dish(Dish* dish)
{
    dishes.push_back(dish);
}

