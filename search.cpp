#include "search.hpp"
#include "restaurant.hpp"
#include "restaurantmgr.hpp"
#include "dish.hpp"

void SimpleSearch::search_dish(string dish)
{
    RestaurantMgr* restmgr = RestaurantMgr::get_restaurant_mgr();
    for(auto i: restmgr->restaurants)
    {
        Restaurant* res = i.second;
        // cout<<res->name<<ed;
        Menu* m  = res->menu;
        for (auto j: m->dishes)
        {
            // cout<<j->name<<ed;
            if(j->name == dish)
            {
                cout<<"Restaurant "<<res->name<<" has this dish at Rs."<<j->price<<ed;
            }
        }
    }
}

void PriceSearch::search_dish(string dish)
{
    cout<<"not supported yet"<<ed;
    return;
}