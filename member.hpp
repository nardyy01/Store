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
    void checkout();
};

class BronzeMember : public Member{
public:
    BronzeMember(const int id, const string cName) : Member(id, cName){
        discount = 0;
    };
};

class SilverMember : public  Member{
public:
    SilverMember(const int id, const string cName) : Member(id, cName){
        discount = 0.10;
    };
};

class GoldMember : public Member{
public:
    GoldMember(const int id, const string cName) : Member(id, cName){
        discount = 0.15;
    };

};
#endif