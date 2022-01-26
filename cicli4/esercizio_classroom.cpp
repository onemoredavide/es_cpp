#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    /*Inserire il nome di 4  città dell'emilia romagna  con  le rispettive temperature registrate ieri (inventare). 
    Visualizzare la temperatura media, e il nome della città che ha registrato la temperatura più alta*/
    int i=0;
    float temp, maxTemp;
    string nome, maxNome;
    while (i<4)
    {
        cout<<"Citta' numero "<<i+1<<" (temperatura, nome citta')"<<endl;
        cin>>temp>>nome;
        if (i==0)
        {
            maxTemp = temp;
            maxNome = nome;
        } else
        {
            if (temp>maxTemp)
            {
                maxTemp = temp;
                maxNome = nome;
            }
        }
        i++;
    }
    cout<<"Temperatura maggiore registrata = "<<maxTemp<<" - "<<maxNome<<endl;
    return 0;
}