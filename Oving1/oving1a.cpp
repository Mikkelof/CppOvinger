#include <iostream>

using namespace std;

int main() {
  const int length = 5;
  int temps[length];
  int below;
  int between;
  int over;

  cout << "Du skal skrive inn 5 temperaturer." << endl;

  for (int i = 0; i < 5; i++) {
    cout << "Temperatur nr " << i + 1 << ":" << endl;
    cin >> temps[i];
    if (temps[i] < 10) {
      below++;
    } else if (temps[i] > 20) {
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
