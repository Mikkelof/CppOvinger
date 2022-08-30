int main() {
  int a = 5;
  int &b = a; //&b blir aldri initialisert, kan fikse ved å sette referanse til a
  int *c;
  c = &b;
  a = b + *c; // a og b er ints og trenger ikke derefereres.
  b = 2;      //&b er en referanse til adressen til b, og kan ikke være 2
}
