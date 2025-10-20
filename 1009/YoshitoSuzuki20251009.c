#include <stdio.h>

int main(void) {

   int top;
   int bottom;
   int hight;

   printf("上辺の長さを入力:");
   scanf("%d", &top);

   printf("下辺の長さを入力:");
   scanf("%d", &bottom);

   printf("高さを入力:");
   scanf("%d", &hight);
   
   double S = (top + bottom) * hight / 2;
   printf("上辺が%d,下辺が%d,高さが%dの台形の面積は、%f。", top,bottom,hight,S);
   return(0);
}