#include <iostream>
#include <vector>

typedef std::vector<int> vi;

vi numberv, ansv;
int number, ans;

// factorial with loop
void factorial1() {
  // start an loop from 1 to number
  // where you will multiply each number from 1 to number
  // and print the result
  number = 1;
  for (int i = 1; i <= number; i++) {
    ans = i * number;
    std::cout << ans << std::endl;
  }
}

int factorial2(int n) {
  // factorial with recursion
  // Base case: factorial of  0 or  1 is  1
  if (n == 0 || n == 1)
    return 1;
  // Recursive case: factorial of n is n multiplied by factorial of (n-1)
  return n * factorial2(n - 1);
}
int reccursionFib(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return reccursionFib(n - 1) + reccursionFib(n - 2);
  }
}
int main() {
  {
    number = 6;
    factorial1();
  }
  std::cout << "Factorial of " << number << " is " << factorial2(number)
            << std::endl;
  return 0;
}
