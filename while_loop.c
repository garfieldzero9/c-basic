// Instructions
// Inside main(), complete the following steps:
//
//     Declare an int variable named i and set it to 1
//     Use a while loop to run as long as i is less than or equal to 5
//     Inside the loop, print the value of i using the correct format specifier
//     Increase i by 1 in each loop

#include <stdio.h>
int main() {

  int i = 1;

  while (i <= 5) {
    printf("%d", i);
    i++;
  }

  return 0;
}
