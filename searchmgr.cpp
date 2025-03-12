#include "searchmgr.hpp"
#include "search.hpp"


SearchMgr* SearchMgr::searchmgr=null;

SearchMgr* SearchMgr::get_searchmgr()
{
    if(searchmgr==null)
    searchmgr = new SearchMgr();
    return searchmgr;
}

void SearchMgr::search_dish(string name, int strategy)
{
    cout<<"searching nearby restaurants for the dish "<<name<<ed;
    Search* searchstrategy = null;
    if(strategy == 0) // simple search
    {
        searchstrategy = new SimpleSearch();
    }
    else 
    searchstrategy = new PriceSearch();

    searchstrategy->search_dish(name);
}