#ifndef cart_h
#define cart_h

#include "product.hpp"
#include <vector>
using namespace std;

class Cart {
private:
    double total = 0;
    vector<Product*> itemsInCart;

public:
    Cart() {};
    void addItem(Product* item);
    void removeItem(Product* item);
    void emptyCart();
    double getTotal();
};

#endif