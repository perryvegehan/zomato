#pragma once

#include "common.hpp"

class Customer;

class CustomerMgr
{
    private:
    static CustomerMgr* customermgr;
    public:
    unordered_map<string, Customer*> customers;
    static CustomerMgr* get_customermgr();
    void add_customer(Customer* customer);
    Customer* find_customer(string name);
};