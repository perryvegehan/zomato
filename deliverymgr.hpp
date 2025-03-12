#include "common.hpp"
class DeliveryPartner;
class DeliveryMgr
{
    private:
    static DeliveryMgr* deliverymgr;
    public:
    unordered_map<string,DeliveryPartner*> deliverypartners;
    static DeliveryMgr* get_deliverymgr();
    void add_deliverypartner(DeliveryPartner* dp);
};