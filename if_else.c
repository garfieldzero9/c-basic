// Instructions
// Inside main(), complete the following steps:
//
//     Declare an int variable named age and assign it a value
//     Use an if statement with the >= operator to check if age is 18 or older
//     If the condition is true, print Allowed
//     Otherwise, print Not allowed

#include <stdio.h>
int main() {

  int age = 25;

  if (age >= 18) {
    printf("Allowed");
  } else {
    printf("Not allowed");
  }

  return 0;
}
