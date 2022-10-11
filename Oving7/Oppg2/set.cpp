#include "set.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

Set::Set() {}

Set::Set(vector<int> numbers) {
  for (const int num : numbers)
    set.push_back(num);
}

Set Set::operator+(Set &other) {
  Set s = *this;
  for (auto num : other.set) {
    if (find(begin(s.set), end(s.set), num) == s.set.end()) {
      s += num;
    }
  }
  return s;
}

Set &Set::operator+=(int num) {
  if (find(set.begin(), set.end(), num) == set.end()) {
    set.push_back(num);
  }
  return *this;
}

Set &Set::operator=(const Set &other) {
  this->set = other.set;
  return *this;
}

ostream &Set::operator<<(ostream &out) {
  out << (*this);
  return out;
}

ostream &operator<<(ostream &out, const Set &s) {
  out << "{";
  for (size_t i = 0; i < s.set.size(); ++i) {
    out << s.set[i];
    if (i < s.set.size() - 1)
      out << ", ";
  }
  out << "}";
  return out;
}
