#include "stdbool.h"

bool isValid(char *s) {
  char stack[1000];

  int top = -1;

  for (int i = 0; s[i] != '\0'; i++) {
    char current = s[i];
    if (current == '(' || current == '{' || current == '[') {
      top++;
      stack[top] = current;
    } else {
      if (top == -1) {
        return false;
      }

      char lastOpen = stack[top];
      top--;

      if (current == ')' && lastOpen != '(')
        return false;
      if (current == ']' && lastOpen != '[')
        return false;
      if (current == '}' && lastOpen != '{')
        return false;
    }
  }

  return top == -1;
}
