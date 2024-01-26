#ifndef cart_h
#define cart_h

#include "product.hpp"
#include <vector>
using namespace std;

class Cart {
private:
    int total = 0;
    vector<Product*> itemsInCart;

public:
    Cart() {};
    void addItem(Product* item);
    void removeItem(Product* item);
    void emptyCart();
    int getTotal();
};

#endif