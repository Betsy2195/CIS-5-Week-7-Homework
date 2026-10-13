#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Betsy Caudel
// CIS 5 Week 07 · Odd and Even

using std::cout;
using std::endl;

int main() {
  const int N = 20;
  int values[N];
  int evens[N];
  int odds[N];
  int even_numbers = 0;
  int odd_numbers = 0;
  
  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }

  // Prints index and element.
  for (int i = 0; i < N; ++i) {
    cout << "[" << i << "] " << values[i] << endl;

    // Finds whether even or odd.
    if (values[i] % 2 == 0){
      evens[even_numbers] = values[i];
      even_numbers++;
    } else {
      odds[odd_numbers] = values [i];
      odd_numbers++;
    }
  }

  // Prints title and even numbers.
  cout << "Even:";
  for (int i = 0; i < even_numbers; ++i){
    cout << " " << evens[i];
  }

  cout << endl;

  // Prints title and odd numbers.
  cout << "Odd:";
  for (int i=0; i < odd_numbers; ++i) {
    cout << " " << odds[i];
  }

  cout << endl;

  return 0;
}
