#include <stdio.h>
#include <string.h>
#include "header.h"

int main(void) {
    Item items[NUM_FRUIT];
    char names[NUM_FRUIT][MAX_PRODUCT_NAME_LONG] = {"Apple", "Banana", "Orange"};
    int stocks[NUM_FRUIT] = {50, 10, 5};
    int prices[NUM_FRUIT] = {100, 80, 200};
    for(int i=0; i<NUM_FRUIT; i++) {
        strcpy(items[i].name, names[i]);
        items[i].stock = stocks[i];
        items[i].price = prices[i];
        printItem(items[i]);
    }

    discountToLowStock(items, NUM_FRUIT, 10, 20);

    for(int i=0; i<NUM_FRUIT; i++) {
        printItem(items[i]);
    }

    printPriceByName(items, NUM_FRUIT, "Cherry");
    printPriceByName(items, NUM_FRUIT, "Orange");
    return 0;
}