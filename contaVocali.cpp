// Scrivi un programma in C++ che prenda in input una stringa di caratteri
//  e ne conti il numero di vocali utilizzando
#include <iostream>
#include <string>

using namespace std;

int contaVocali(string parola)
{
    int vocali = 0;
    for (int i = 0; i < parola.length(); i++)
    {
        if (parola[i]== 'a')
        {
            vocali++;
        }
        else if (parola[i]== 'e')
        {
            vocali++;
        }
        else if (parola[i]== 'i')
        {
            vocali++;
        }
        else if (parola[i]== 'o')
        {
            vocali++;
        }
        else if (parola[i]== 'u')
        {
            vocali++;
        }
    }
    return vocali;
}

int main()
{
    string parola;

    cout << "inserisci una parola: " << endl;
    cin >> parola;

    cout<<contaVocali(parola)<<endl;
}