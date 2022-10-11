#include "set.hpp"
#include <array>
#include <iostream>

using namespace std;

int main() {
  Set a({2, 5, 9});
  Set b({3, 5, 8});
  Set c;

  cout << "Set a: " << a << endl;
  cout << "Set b: " << b << endl;

  c += 7;

  cout << "Set c after adding 7: " << c << endl;

  c += 7;

  cout << "Set c after adding 7 again (should not be added twice): " << c << endl;

  Set d = a + b;

  cout << "Set d, the union of a and b: " << d << endl;

  a = c;

  cout << "Set a after being set equal to set c: " << a << endl;
}
