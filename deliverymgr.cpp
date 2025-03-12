#include "deliverypartner.hpp"
#include "deliverymgr.hpp"

DeliveryMgr* DeliveryMgr::deliverymgr=null;

DeliveryMgr* DeliveryMgr::get_deliverymgr()
{
    if(deliverymgr==null)
    deliverymgr = new DeliveryMgr();
    return deliverymgr;
}

void DeliveryMgr::add_deliverypartner(DeliveryPartner* dp)
{
    deliverypartners[dp->name] = dp;
    cout<<"Delivery partner "<<dp->name<<" has been onboarded"<<ed;
    return;
}