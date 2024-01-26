#ifndef product_h
#define product_h

#include <string>

using namespace std;

class Product {
private:
    double price;

public:
    string name;

    Product(string pName, double cost) : name(pName), price(cost){};
    double getPrice(){ return price;};
};

#endif