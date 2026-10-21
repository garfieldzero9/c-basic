// Instructions
// Inside main(), complete the following steps:
//
//     Declare an int variable named x and store 10 in it
//     Declare a pointer named ptr that points to x
//     Print the value of x by dereferencing ptr

#include <stdio.h>
int main() {

  int x = 10;
  int *ptr = &x;

  printf("%d", *ptr);

  return 0;
}
