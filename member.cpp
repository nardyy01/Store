#include "member.hpp"
#include <iostream>
using namespace std;

void Member::checkout(){
         // Apply member discount
        double total = cart->getTotal();
        total = total - (total * discount);
        cout << "Member Discount Applied: "<< discount*100 << "%" << endl;
        cout << "Final Total: " << total << endl;

        // Empty the cart after checkout
        cart->emptyCart();
    }