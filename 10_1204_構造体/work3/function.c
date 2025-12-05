#include <stdio.h>
#include <string.h>
#include "header.h"

void printItem(Item item) {
    printf("name: %s", item.name);
    printf(" / ");
    printf("stock: %d", item.stock);
    printf(" / ");
    printf("price: %dJPY\n", item.price);
}


void discountToLowStock (Item *items, int n, int thresh, int p) {
    for(int i=0; i<n; i++) {
        if(items[i].stock < thresh) {
            items[i].price -= items[i].price * p / 100;
        }
    }
}

void printPriceByName (Item *items, int n, const char *name) {
    for(int i=0; i<n; i++) {
        if(!strcmp(items[i].name, name)) {
            printf("item %s 's price is %dJPY\n", items[i].name, items[i].price);
            return;
        }
    }
    printf("item %s is not found.\n", name);
}