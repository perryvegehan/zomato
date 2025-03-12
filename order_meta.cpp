#include "order_meta.hpp"

MetaOrder::MetaOrder(int src, int dest, int orderid)
{
    this->src= src;
    this->dest=dest;
    this->orderid = orderid;
}