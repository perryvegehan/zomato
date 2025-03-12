#include "common.hpp"

class DeliveryPartner
{
    public:
    string name;
    int rating;
    bool avail;
    DeliveryPartner(string name, int rating, bool avail=true);
};