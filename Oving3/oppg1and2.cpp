const double pi = 3.141592;

class Circle {
public:
  Circle(double radius_); // Stor C
  int get_area() const;
  double get_circumference() const;

private: // Ny linje
  double radius;
}; // La til ;

// ==> Implementasjon av klassen Circle

Circle::Circle(double radius_) : radius(radius_) {} // Fjernet public og bytte _ til å være innenfor parentes

int Circle::get_area() const { // La til const
  return pi * radius * radius;
}

double Circle::get_circumference() const { // La til double
  return 2.0 * pi * radius;                // Fjerna circumference-variabelen
}

#include <iostream>

using namespace std;

int main() {
  Circle circle(5);

  double area = circle.get_area();
  cout << "Arealet er lik " << area << endl;

  double circumference = circle.get_circumference();
  cout << "Omkretsen er lik " << circumference << endl;
}
