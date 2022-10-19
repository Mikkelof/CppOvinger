#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
  cout << "Normal version" << endl;
  return a == b;
}

bool equal(double a, double b) {
  cout << "Special version" << endl;
  return abs(a - b) < 0.00001;
}

int main() {
  int num1 = 6;
  int num2 = 9;

  cout << "This should use the normal version" << endl;

  equal(num1, num2);

  string word1 = "word1";
  string word2 = "word2";

  cout << "This should also use the normal version" << endl;

  equal(word1, word2);

  double dub1 = 1;
  double dub2 = 1.00000001;

  cout << "This should use the special version" << endl;

  equal(dub1, dub2);
}
