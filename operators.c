// Instructions
// Inside main(), complete the following steps:
//
//     Declare two int variables named itemPrice and shippingCost, and assign
//     them values Create an int variable named sum Calculate the total cost by
//     adding itemPrice and shippingCost (store the result in sum) Print the
//     total cost using printf

#include <stdio.h>
int main() {

  int itemPrice = 20, shippingCost = 10;
  int sum;

  sum = itemPrice + shippingCost;

  printf("Sum : %d", sum);

  return 0;
}
