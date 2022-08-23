#include <fstream>
#include <iostream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
  const int length = 5;
  double temperatures[length];
  int below;
  int between;
  int over;

  read_temperatures(temperatures, length);

  for (int i = 0; i < 5; i++) {
    if (temperatures[i] < 10) {
      below++;
    } else if (temperatures[i] > 20) {
      over++;
    } else {
      between++;
    }
  }

  cout << "Antall under 10 er " << below << endl;
  cout << "Antall mellow 10 og 20 er " << between << endl;
  cout << "Antall over 20 er " << over << endl;

  return 0;
}

void read_temperatures(double temperatures[], int length) {
  const char filename[] = "temperatures";
  ifstream file;
  file.open(filename);

  if (!file) {
    cout << "Feil ved åpning av innfil." << endl;
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < length; i++) {
    double temperature;
    file >> temperature;
    temperatures[i] = temperature;
  }
}
