#pragma once
#include "common.hpp"
class DeliveryPartner;
class Order;
class DMStrategy
{
    public:
    virtual DeliveryPartner* find_delivery_partner(Order* order)=0;
};

class DefaultDMStrategy: public DMStrategy
{
    public:
    DeliveryPartner* find_delivery_partner(Order* order);
};

class RatingDMStrategy: public DMStrategy
{
    public:
    DeliveryPartner* find_delivery_partner(Order* order);
};