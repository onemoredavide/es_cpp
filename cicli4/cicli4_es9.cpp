#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*Data una sequenza di N numeri terminante con 0, determinare la media aritmetica dei numeri negativi e il
    prodotto dei positivi, dando un messaggio se la sequenza è vuota*/
    int contaValori=0,valoreInserito,contaNegativi,prodottoPositivi=1,sommaNegativi=0;
    bool sequenzaVuota;
    do
    {
        cin>>valoreInserito;
        if (contaValori==0 && valoreInserito==0)
        {
            cout<<"Sequenza vuota."<<endl;
            sequenzaVuota=true;
            break;
        }
        if (valoreInserito>0)
            prodottoPositivi*=valoreInserito;
        else 
            sommaNegativi+=valoreInserito;
        contaValori++;
    } while (valoreInserito!=0);
    if (!sequenzaVuota)
    {
        float mediaNegativi=(float)sommaNegativi/contaValori;
        cout<<"MEDIA NEGATIVI="<<mediaNegativi<<endl;
    }
    return 0;
}