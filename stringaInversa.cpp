#include <iostream>
#include <string>

using namespace std;

// scrivi un programma in C++ che prenda in input una stringa di caratteri
// e ne stampi ogni carattere in ordine inverso
string inversa(string parola)
{
  string inv = ""; // uso una stringa vuota per partire da 0
  for (int i = parola.length() - 1; i >= 0; i--)
  {
    inv += parola[i];
  }
  return inv; //voglio una stringa in ritorno 
}

int main()
{
  string parola;
  cout << "inserisci una parola: " << endl;
  cin >> parola;

  cout << inversa(parola);
}