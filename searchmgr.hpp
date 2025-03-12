#include "common.hpp"

class SearchMgr
{
    private:
    static SearchMgr* searchmgr;
    public:
    static SearchMgr* get_searchmgr();
    void search_dish(string name, int searchstrat =0);
};