#include "common.hpp"
#include "menu.hpp"
#include "dish.hpp"
#include "restaurantmgr.hpp"
#include "restaurant.hpp"
#include "search.hpp"
#include "searchmgr.hpp"

int main()
{
    Dish* egg = new Dish("Egg", 10);
    Dish* chicken = new Dish("Chicken", 50);
    Dish* potato = new Dish("Potato", 20);
    Dish* fish = new Dish("Fish", 100);
    Dish* fries = new Dish("Fries", 60);
    RestaurantMgr* restmgr = RestaurantMgr::get_restaurant_mgr();
    Menu* menu1 = new Menu(egg);
    menu1->add_dish(chicken);
    menu1->add_dish(fish);
    Menu* menu2 = new Menu(potato);
    menu2->add_dish(fries);
    menu2->add_dish(egg);
    Restaurant* nonveg = new Restaurant("nonveg",1,menu1);
    Restaurant* veg = new Restaurant("veg",3,menu2);

    SearchMgr* searchmgr = SearchMgr::get_searchmgr();
    searchmgr->search_dish("Egg");

    // now lets search for a dish

}