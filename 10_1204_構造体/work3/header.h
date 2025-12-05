#ifndef HEADER_H
#define HEADER_H

#define NUM_FRUIT 3
#define MAX_PRODUCT_NAME_LONG 50

typedef struct structName {
    char name[50];
    int stock;
    int price;
} Item;

void printItem (Item item);
void discountToLowStock (Item *items, int n, int thresh, int p);
void printPriceByName (Item *items, int n, const char *name);

#endif