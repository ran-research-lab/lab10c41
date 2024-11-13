// Tu Nombre
// Descripción

#include <cassert>
#include <iostream>
using namespace std;

// funcion upperCaseCount:
// Dado un string st, devuelve cuántas letras mayúsculas contiene

int upperCaseCount(string st) {
  int ctr = 0;
  for (char c : st) {
    if (isupper(c))
      ctr++;
  }
  return ctr;
}

int main() {

  // afirmaciones para validar upperCaseCount
  assert(upperCaseCount("PeRRo99") == 3);
  assert(upperCaseCount("77a4ada") == 0);
  assert(upperCaseCount("") == 0);
  assert(upperCaseCount("ALGO") == 4);

  cout << "Pasó todas las afirmaciones\n";
  return 0;
}
