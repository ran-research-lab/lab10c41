// Tu Nombre
// Descripción

#include <cassert>
#include <iostream>
using namespace std;

// funcion upperCaseCount:
// Dado un string st, devuelve cuántas letras mayúsculas contiene

int upperCaseCount(const string &st) {
  int ctr = 0;
  for (char c : st) {
    if (isupper(c))
      ctr++;
  }
  return ctr;
}

void testFunctions() {
  // afirmaciones para validar upperCaseCount
  assert(upperCaseCount("PeRRo99") == 3);
  assert(upperCaseCount("77a4ada") == 0);
  assert(upperCaseCount("") == 0);
  assert(upperCaseCount("ALGO") == 4);

  // afirmaciones para validar lowerCaseCount
  // assert(lowerCaseCount("PeRRo99") == 2);
  // .....

  cout << "Pasó todas las afirmaciones\n";
}

int main() {
  testFunctions();
  return 0;
}
