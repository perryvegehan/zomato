#include "dm_strategy.hpp"
#include "ordermgr.hpp"
#include "order.hpp"
#include "deliverymgr.hpp"
#include "deliverypartner.hpp"

DeliveryPartner* DefaultDMStrategy::find_delivery_partner(Order* order)
{
    // based on this data we need to fnd one
    DeliveryMgr* deliverymgr = DeliveryMgr::get_deliverymgr();
    if (deliverymgr->deliverypartners.size()==0)
    {
        cout<<"No delivery partners nearby"<<ed;
        return null;
    }
    for (auto i: deliverymgr->deliverypartners)
    {
        if( i.second->avail)
        return i.second;
    }
    cout<<"No delivery partner is available"<<ed;
    return null;
}

DeliveryPartner* RatingDMStrategy::find_delivery_partner(Order* order)
{
    DeliveryMgr* deliverymgr = DeliveryMgr::get_deliverymgr();
    if (deliverymgr->deliverypartners.size()==0)
    {
        cout<<"No delivery partners nearby"<<ed;
        return null;
    }
    DeliveryPartner* dp=null;
    int rating = -1;
    for (auto i: deliverymgr->deliverypartners)
    {
        if(rating<i.second->rating)
        {
            rating = i.second->rating;
            dp=i.second;
        }
    }
    return dp;
}