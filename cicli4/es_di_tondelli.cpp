#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {

    int lato, base, altezza, costo, area;
    cout<<"Inserisci i seguenti dati: LATO DELLA PIASTRELLA, BASE DELLA PIAZZA, ALTEZZA DELLA PIAZZA, COSTO PIASTRELLA."<<endl;
    cin>>lato>>base>>altezza>>costo;
    
    area=base*altezza;

    int areaPiastrella=lato*lato;
    int totalePiastrelle=area/areaPiastrella;

    int costoTotale=totalePiastrelle*costo;

    cout<<"-----------"<<endl<<costoTotale<<endl;

    return 0;
}