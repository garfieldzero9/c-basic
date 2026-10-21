// Instructions
// A customer wants to order Coffee.
//
// The code in the editor is incomplete. Fix it by inserting the missing values
// so the program prints the correct order.
//
//     Change choice to the correct number for Coffee (see the comments).
//     Insert choice inside switch().
//     Replace each case: with the correct number based on the comments above.
//     Move printf("Invalid choice\n") into a default: case.
#include <stdio.h>

int main() {
  int choice = 2;

  switch (choice) {
  case 1:
    printf("You ordered coffee");
    break;
  case 2:
    printf("You ordered Tea");
    break;
  default:
    printf("Invalid choice");
  }

  return 0;
}
