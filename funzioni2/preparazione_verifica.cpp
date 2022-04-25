#include <iostream>
#include <cstdlib>
using namespace std;

int input_ammalati() {
    int x;
    do {
        cout<<"AMMALATI: ";
        cin>>x;
    } while(x<100);
    return x;
}

int input_percentuale() {
    int x;
    do{
        cout<<"PERCENTUALE GUARITI: ";
        cin>>x;
    } while(x<=0);
    return x;
}

int giorni(int ammalati, int percentuale) {
    int g=0, guariti;
    while(ammalati>=100) {
        guariti=(percentuale*ammalati)/100;
        g++;
        ammalati-=guariti;
    }
    return g;
}
int main() {
    int x=input_ammalati();
    int per=input_percentuale();
    int gg = giorni(x, per);
    cout<<"Giorni necessari affinche' gli ammalati siano meno di 100: "<<gg;
}