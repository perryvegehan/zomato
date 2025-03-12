#include "strategymgr.hpp"
#include "order.hpp"
#include "pricingstrategy.hpp"
#include  "customer.hpp"
#include "restaurant.hpp"

#include "dm_strategy.hpp"
StrategyMgr* StrategyMgr::strategymgr = null;

StrategyMgr* StrategyMgr::get_strategymgr()
{
    if(strategymgr == null)
    strategymgr = new StrategyMgr();
    return strategymgr;
}

PricingStrategy* StrategyMgr::get_pricing_strategy(Order* order)
{
    PricingStrategy* ps=null;
    int src= order->rest->location;
    int dest = order->customer->location;
    if (abs(src-dest)>2)
    return new DistancePricingStrategy();
    else
    return new DefaultPricingStrategy();
}

DMStrategy* StrategyMgr::get_delivery_matching_strategy(Order* order)
{
    // some logic to decide
    return new RatingDMStrategy();
}
