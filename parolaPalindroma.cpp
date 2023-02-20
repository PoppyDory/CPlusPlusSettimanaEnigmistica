// scrivi un progranna che prenda in input una stringa di caratterio e verifichi se questaa è un palindromo

#include <iostream>
#include <string>

using namespace std;

string inversa(string parola)
{
  string inv = ""; // uso una stringa vuota per partire da 0
  for (int i = parola.length() - 1; i >= 0; i--)
  {
    inv += parola[i];
  }
  return inv; //voglio una stringa in ritorno 
}


bool palindromo(string parola)
{
    if(parola==inversa(parola))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    string parola;
    cout << "inserisci parola: " << endl;
    cin >> parola;

    if(palindromo(parola)==true)
    {
        cout<<" La parola inserita e' palindroma. ";
    }
    else
    {
        cout<<" La parola non e' palindroma. ";
    }
    
}