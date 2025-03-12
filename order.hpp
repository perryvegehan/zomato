#pragma once
#include "common.hpp"
class Dish;
class Restaurant;
class DeliveryPartner;
class Customer;
class Order
{
    private:
    string status;
    
    public:
    int orderid;
    Customer* customer;
    vector<Dish*> dishes;
    Restaurant* rest;
    DeliveryPartner* partner;
    int amount;
    void set_status(string status);

    Order(int orderid, Customer*, vector<Dish*>, Restaurant*);
    void display_order();
};