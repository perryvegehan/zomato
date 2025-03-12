#include "customer.hpp"
#include "customermgr.hpp"

CustomerMgr* CustomerMgr::customermgr = null;

CustomerMgr* CustomerMgr::get_customermgr()
{
    if(customermgr == null)
    customermgr = new CustomerMgr();
    return customermgr;
}

void CustomerMgr::add_customer(Customer* customer)
{
    customers[customer->name] = customer;
    cout<<"Welcome to Zomato "<<customer->name<<ed;
}
Customer* CustomerMgr::find_customer(string name)
{
    for (auto i: customers)
    {
        if(i.first == name)
        return i.second;
    }
    return null;
}