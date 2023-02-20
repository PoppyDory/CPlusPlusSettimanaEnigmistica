// Scrivi un programma in C++ che prenda in input una stringa di caratteri
// e conti quante volte ogni carattere è presente all'interno della stringa.

#include <iostream>
#include <string>

using namespace std;

bool cercaCarattere(string parola, char carattere)  //uso la funzione cerca carattere 
{
    int i = 0;
    while (i < parola.length()) // scorro la parola fino alla fine
    {
        if (parola[i] == carattere) // se trovo il carattere nella parola ritorna vero
        {
            return true;
        }
        i++; //altrimenti incrementa
    }
    return false;
}

int main()
{
    string parola;
    cout<< "inserisci una parola: "<< endl;
    cin>>parola; 
    
    string controllo = "";  //mi serve per fare una stringa di appoggio per i caratteri che ho già controllato nel coclo for.
    int lettera = 0;

    for (int i = 0; i < parola.length(); i++)  //con il primo ciclo scorro la parola
    {
        if (!cercaCarattere(controllo, parola[i])) //se il carattere non è presente nella stringa controllo faccio il secondo ciclo for
        {
            for (int y = 0; y < parola.length(); y++) //con il secondo ciclo controllo il carattere con quelli successivi
            {
                if (parola[i] == parola[y])
                {
                    lettera++;
                }
                controllo += parola[i]; //se la lettera che ho controllato non è nella stringa di controllo, aggiungo il carattere
            } // torno sul primo ciclo 

            cout << "la lettera " << parola[i] << " compare " << lettera << " volte" << endl;
            lettera = 0;
        }
    }
}
