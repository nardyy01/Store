#include "cart.hpp"

void Cart::addItem(Product* item){
    itemsInCart.push_back(item);
    total += item->getPrice();
}

void Cart::removeItem(Product* item){
    if (itemsInCart.empty()) return;
    
    // Find item in cart and remove it
    for (int i = 0; i < itemsInCart.size(); i++){

        if (itemsInCart[i] == item){
            itemsInCart[i] = itemsInCart[itemsInCart.size()-1];
            itemsInCart.pop_back();

            // Remove cost from our total
            total -= item->getPrice();
            return;
        }
    }
}

void Cart::emptyCart(){
    itemsInCart.clear();
}

int Cart::getTotal(){
    return 0;
}
