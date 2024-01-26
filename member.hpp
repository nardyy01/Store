#ifndef member_h
#define member_h

#include "cart.hpp"
#include <string>
#include <iostream>
using namespace std;

class Member {
protected:
    double discount = 0;
private:
    int memberId;
    std::string name;

public:
    Cart* cart = nullptr;

    Member(const int id, const string cName) : memberId(id), name(cName), cart(new Cart()){};
    virtual void checkout() = 0;
};

class BronzeMember : public Member{
protected:
    double discount = 0;
public:
    BronzeMember(const int id, const string cName) : Member(id, cName){};
    void checkout(){
         // Apply member discount
        double total = cart->getTotal();
        total = total - (total * discount);
        cout << "Member Discount Applied: "<< discount*100 << "%" << endl;
        cout << "Final Total: " << total << endl;

        // Empty the cart after checkout
        cart->emptyCart();
    }
};

class SilverMember : public  Member{
protected:
    double discount = 0.10;
public:
    SilverMember(const int id, const string cName) : Member(id, cName){};
    void checkout(){
         // Apply member discount
        double total = cart->getTotal();
        total = total - (total * discount);
        cout << "Member Discount Applied: "<< discount*100 << "%" << endl;
        cout << "Final Total: " << total << endl;

        // Empty the cart after checkout
        cart->emptyCart();
    }
};

class GoldMember : public Member{
protected:
    double discount = 0.15;
public:
    GoldMember(const int id, const string cName) : Member(id, cName){};
    void checkout(){
         // Apply member discount
        double total = cart->getTotal();
        total = total - (total * discount);
        cout << "Member Discount Applied: "<< discount*100 << "%" << endl;
        cout << "Final Total: " << total << endl;

        // Empty the cart after checkout
        cart->emptyCart();
    }
};
#endif