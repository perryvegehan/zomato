#include "common.hpp"

class Order;

class PricingStrategy
{
    public:
    virtual int calculate_price(Order*)=0;
};

class DefaultPricingStrategy: public PricingStrategy
{
    public:
    int calculate_price(Order*);
};
class DistancePricingStrategy: public PricingStrategy
{
    public:
    int calculate_price(Order*);
};