#include <stdio.h>
/* A program that calculates the minimum number of coins required to give a user change. */
int main(void) {
  float change;
  int numberOfCoins;

  printf("Change owed");

  scanf("%f", &change);
  while (change > 0){
    if(change >= 0.25){
      change -= 0.25;
      numberOfCoins++;
    }
    else if(change >= 0.10){
      change -= 0.10;
      numberOfCoins++;
    }
    else if(change >= 0.05){
      change -= 0.05;
      numberOfCoins++;
    }
    else{
      change -= 0.01;
      numberOfCoins++;
    }
  }

  printf("%d",numberOfCoins);
  return 0;
}