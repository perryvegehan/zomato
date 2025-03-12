#include "common.hpp"
class PricingStrategy;
class Order;
class DMStrategy;
class StrategyMgr
{
    private:
    static StrategyMgr* strategymgr;

    public:
    static StrategyMgr* get_strategymgr();
    PricingStrategy* get_pricing_strategy(Order*);
    DMStrategy* get_delivery_matching_strategy(Order*);
};