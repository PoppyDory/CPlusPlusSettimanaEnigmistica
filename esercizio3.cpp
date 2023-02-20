// Scrivi un programma in C++ che prenda in input una stringa di caratteri
// e conti quante volte ogni carattere è presente all'interno della stringa.

#include <iostream>
#include <string>

using namespace std;

bool cercaCarattere(string parola, char carattere)
{
    int i = 0;
    while (i < parola.length()) // scorro la parola
    {
        if (parola[i] == carattere) // se trovo il carattere nella parola ritorna vero
        {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{
    string parola = "mamma";
    string controllo = "";
    int lettera = 0;

    for (int i = 0; i < parola.length(); i++)
    {
        if (!cercaCarattere(parola[i], controllo))
        {
            for (int y = 0; y < parola.length(); y++)
            {
                if (parola[i] == parola[y])
                {
                    lettera++;
                }
                controllo += parola[i];
            }

            cout << "la lettera " << parola[i] << " compare " << lettera << " volte" << endl;
            lettera = 0;
        }
    }

    cout << "fine" << endl;
}
