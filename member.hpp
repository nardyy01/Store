#ifndef member_h
#define member_h

#include "cart.hpp"
#include <string>
using namespace std;

class Member {
protected:
double discount;

private:
    int memberId;
    std::string name;

public:
    Cart* cart = nullptr;

    Member(const int id, const string cName) : memberId(id), name(cName), cart(new Cart()){};
    void checkout();
};

class BronzeMember : public Member{
protected:
    double discount = 0;
public:
    BronzeMember(const int id, const string cName) : Member(id, cName){};
};

class SilverMember : public  Member{
protected:
    double discount = 0.10;
public:
    SilverMember(const int id, const string cName) : Member(id, cName){};
};

class GoldMember : public Member{
protected:
    double discount = 0.15;
public:
    GoldMember(const int id, const string cName) : Member(id, cName){};
};
#endif