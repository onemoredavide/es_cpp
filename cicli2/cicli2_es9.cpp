#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {

    srand(time(NULL));

    int n, val, i=0, min=100, sp=0, cp=0, sd=0, esp;
    float media;
    double potenza;
    
    cout<<"Inserisci il numero dei valori da generare: "<<endl;
    do
    {
        cin>>n;
    } while (n <= 0 || n > 150);

    cout<<"Inserisci "<<n<<" numeri."<<endl;
    
    while (i < n) {

        val = rand() % 131 + (-30);
        cout<<val<<endl;

        // minore tra i numeri generati
        if(val < min) min = val;

        // somma dei pari, somma dei dispari, media dei pari
        if (val % 2 == 0) { sp += val; cp++; }
        else              { sd += val; }

        // | val | se val e' un numero negativo
        if (val < 0) { cout<<"VALORE ASSOLUTO: "<<abs(val)<<endl;}

        // sqrt() se e' un numero > 100
        if (val > 100) { cout<<"RADICE QUADRATA (VAL > 100): "<<sqrt(val)<<endl; }

        // visuzlizza val ^ (numero inserito in input)
        cout<<"Inserisci l'esponente: ";
        cin>>esp;
        potenza = pow(val, esp);
        cout<<val<<"^"<<esp<<"="<<potenza<<endl<<"------------------------------------------------"<<endl;

        i++;
    }

    //////////////// OUTPUT ////////////////
    media = (float) sp / (float) cp;

    cout<<"VALORE MINORE: "<<min<<endl;

    if (sp > sd) { cout<<"LA SOMMA DEI PARI E' MAGGIORE."<<endl; }
    else {cout<<"LA SOMMA DEI DISPARI E' MAGGIORE O UGUALE ALLA SOMMA DEI PARI."<<endl; }

    cout<<"MEDIA DEI PARI: "<<media<<endl;

    return 0;
}
