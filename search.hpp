#include "common.hpp"


class Search
{
    // this will be an interface
    public:
    virtual void search_dish(string dish)=0;
};

class SimpleSearch: public Search
{
    public:
    void search_dish(string dish);
};

class PriceSearch : public Search
{
    public:
    void search_dish(string dish);
};