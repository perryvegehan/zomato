#include "deliverymgr.hpp"
#include "deliverypartner.hpp"

DeliveryPartner::DeliveryPartner(string name, int rating, bool avail)
{
    this->name = name;
    this->rating = rating;
    this->avail = avail;
    DeliveryMgr* manager = DeliveryMgr::get_deliverymgr();
    manager->add_deliverypartner(this);
}