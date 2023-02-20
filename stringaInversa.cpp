#include <iostream>
#include <string>

using namespace std;

//scrivi un programma in C++ che prenda in input una stringa di caratteri 
//e ne stampi ogni carattere in ordine inverso
int main()
{
    string parola;
    cout<<"inserisci una parola: "<< endl;
    cin >> parola;
    
    for (int i=parola.length(); i>0 ; i--)
    {
      cout<< parola[i-1];  
    }
    
}