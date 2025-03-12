#pragma once
#include "common.hpp"
class MetaOrder;
class Order;
class Dish;
class OrderMgr
{
    private:
    static int orderid;
    static OrderMgr* ordermgr;
    public:
    unordered_map<int,Order*> orders;;
    static OrderMgr* get_ordermgr();
    void recieve_order(string customername, vector<Dish*>, string);
};

