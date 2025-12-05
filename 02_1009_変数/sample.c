#include <stdio.h>

int cards[16][16];
int makingSet(void);
int sel(void);

int main(void) {
   makingSet();
   return(0);
}


int makingSet(void) {

   int kit[13*4];
   for (int p=0;p<13;p++){
      for (int q=0;q<4;q++) {
         kit[p + (13*q)] = 100*(q+1) + p+1;
         printf("%d\n", kit[p + (13*q)]);
      } 
   }
   return(0);
}


int sel(void) {
}
