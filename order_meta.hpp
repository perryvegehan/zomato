#pragma once

#include "common.hpp"

class MetaOrder
{
    public:
    int src;
    int dest;
    int orderid;
    MetaOrder(int src,int dest,int orderid);
};