#include "customer.hpp"
#include "customermgr.hpp"
Customer::Customer(string name, int location)
{
    this->name = name;
    this->location = location;
    CustomerMgr* manager = CustomerMgr::get_customermgr();
    manager->add_customer(this);
}