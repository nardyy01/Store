#include "member.hpp"
#include "product.hpp"
#include "iostream"
#include <string>

using namespace std;

int main() {

    BronzeMember* m1 = new BronzeMember(0, "Bob");
    SilverMember* m2 = new SilverMember(1, "Tom");
    GoldMember* m3 = new GoldMember(2, "Jerry");

    Product* tissue = new Product("Tissue", 1.99);
    Product* towel = new Product("Towel", 10.99);
    Product* soda = new Product("Soda", 2.99);

    m1->cart->addItem(tissue);
    m1->cart->addItem(towel);
    m2->cart->addItem(soda);
    m2->cart->addItem(towel);
    m2->cart->addItem(towel);
    m3->cart->addItem(tissue);
    m3->cart->addItem(tissue);

    m3->cart->removeItem(tissue);
    m2->cart->removeItem(soda);
    m3->cart->removeItem(soda);

    m1->checkout();
    m2->checkout();
    m3->checkout();

}