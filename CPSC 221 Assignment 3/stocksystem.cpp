//
//  stocksystem.cpp
//  CPSC 221 Assignment 3
//
//  Created by Sophia Nguyen on 2016-06-07.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#include "stocksystem.h"

using namespace std;

// default constructor;
// begin with a balance of $100,000.00
StockSystem::StockSystem() {
    //TO-DO
}

// returns the balance member
double StockSystem::GetBalance() {
    //TO-DO
    return 0;
}

// Add a new SKU to the system. Do not allow insertion of duplicate sku
bool StockSystem::StockNewItem(StockItem item){
    //TO-DO
    return false;
}

// Locate the item with key itemsku and update its description field.
// Return false if itemsku is not found.
bool StockSystem::EditStockItemDescription(int itemsku, string desc) {
    //TO-DO
    return false;
}

// Locate the item with key itemsku and update its description field.
// Return false if itemsku is not found or retailprice is negative.
bool StockSystem::EditStockItemPrice(int itemsku, double retailprice) {
    //TO-DO
    return false;
}

// Purchase quantity of item at unitprice each, to reach a maximum (post-purchase) on-hand stock quantity of 1000.
// Return false if balance is not sufficient to make the purchase,
//   or if SKU does not exist, or if quantity or unitprice are negative.
// Otherwise, return true and increase the item's on-hand stock by quantity,
//   and reduce balance by quantity*unitprice.
bool StockSystem::Restock(int itemsku, int quantity, double unitprice) {
    //TO-DO
    return false;
}

// Sell an item to a customer, if quantity of stock is available and SKU exists.
// Reduce stock by quantity, increase balance by quantity*price, and return true if stock available.
// If partial stock (less than quantity) available, sell the available stock and return true.
// If no stock, sku does not exist, or quantity is negative, return false.
bool StockSystem::Sell(int itemsku, int quantity) {
    //TO-DO
    return false;
}




