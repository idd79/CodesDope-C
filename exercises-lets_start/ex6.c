#include <stdio.h>

// Take two integer inputs from user. First calculate the sum of two then
// product of two. Finally, print the sum and product of both obtained results.

int main()
{
  int x, y;
  printf("Enter the first number: ");
  scanf("%d", &x);
  printf("Enter the second number: \n");
  scanf("%d", &y);
  int sum = x + y;
  int prod = x * y;
  printf("The sum is %d\n", sum);
  printf("The product is %d\n", prod);
  return 0;
}