#pragma once

#include <ostream>
#include <vector>

using namespace std;

class Set {
public:
  Set();
  Set(vector<int> numbers);

  Set operator+(Set &other);
  Set &operator+=(int num);
  Set &operator=(const Set &other);
  ostream &operator<<(ostream &out);
  friend ostream &operator<<(ostream &out, const Set &s);

private:
  vector<int> set;
};
