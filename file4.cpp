


#include <iostream>

using namespace std;


int factorial(int n) {
  if(n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}


int main() {

  int n = 6;

  cout << "The factorial of '" << n << "' is = " << factorial(n) << "\n";
}