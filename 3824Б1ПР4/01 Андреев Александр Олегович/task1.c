#include <limits.h> 

int sum_of_two_numbers(int a, int b) {
  if (b > 0 && a > INT_MAX - b) {
    return INT_MAX;
  }
  if (b < 0 && a < INT_MIN - b) {
    return INT_MIN;
  }
int sum_of_two_numbers(int a, int b)
{
  return 0;
}
