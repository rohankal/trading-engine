#include <imports.h>
#include <order.cpp>

class orderBook
{
private:
    order buyOrders[];
    order sellOrders[];

public:
    orderBook();
    ~orderBook();
    void addBuyOrder(order o){};
    void addSellOrder(order o){};
    void cancelBuyOrder(int id){};
    void cancelSellOrder(int id){};
};
