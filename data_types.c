// Instructions
// Inside main(), complete the following steps:
//
//     Declare an int named studentID and assign it a value
//     Declare a float named score and assign it a value (with decimals)
//     Declare a char named grade and assign it a single letter (in single
//     quotes) Print all three values using printf (use the correct format
//     specifiers).

#include <stdio.h>
int main() {

  int studentID = 10;
  float score = 25.50;
  char grade = 'B';

  printf("The ambaalabu with studentID : %d has score %f and grade : %c",
         studentID, score, grade);

  return 0;
}
