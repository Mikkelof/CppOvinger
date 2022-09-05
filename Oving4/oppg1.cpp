#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> numbers = {1.1, 2.2, 3.3, 4.4, 5.5};

  cout << "Front: " << numbers.front() << ". Back: " << numbers.back() << endl;

  numbers.emplace(numbers.begin() + 1, 1.6);

  cout << "Front: " << numbers.front() << endl;

  auto it = find(numbers.begin(), numbers.end(), 1.6);
  if (it != numbers.end())
    cout << "Number found in numbers: " << *it << " at position " << it - numbers.begin() + 1 << endl;
  else
    cout << "Number not found in numbers" << endl;
}
