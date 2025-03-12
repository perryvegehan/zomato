#include "pricingstrategy.hpp"
#include "order.hpp"
#include "dish.hpp"
#include "customer.hpp"
#include "restaurant.hpp"

int DefaultPricingStrategy::calculate_price(Order* order)
{
    vector<Dish*> dishes = order->dishes;
    int sum=0;
    for(auto i:dishes)
    {
        sum+=i->price;
    }
    return sum;
}
int DistancePricingStrategy::calculate_price(Order* order)
{
    int src= order->rest->location;
    int dest = order->customer->location;
    int charge=0;
    // if (abs(src-dest)>2)
    charge=30* (abs(src-dest));
    vector<Dish*> dishes = order->dishes;
    int sum=0;
    for(auto i:dishes)
    {
        sum+=i->price;
    }
    return sum+charge;
}