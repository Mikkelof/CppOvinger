int main() {
  double number;

  double *pNumber = &number;
  double &rNumber = number;

  number = 12.3; // Bruker number direkte

  *pNumber = 23.4; // Bruker pointer

  rNumber = 34.5; // Bruker referanse
}
