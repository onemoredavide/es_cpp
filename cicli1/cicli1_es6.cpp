#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	// 6. Dato un elenco di n prezzi, con n<=50, inseriti in input, contare e visualizzare quanti sono i prezzi inferiori a 100 euro. 
	//Vsualizzare anche il prezzo totale considerando che viene applicato uno sconto del 10% se il totale supera 1000 euro.
	
	int n, val, c, s, i, tot, sconto=0;
	cout<<"Inserisci il numero di prezzi: "<<endl;
	do
	{
		cin>>n;
	}
	while (n > 50);
	
	while (i < n) {
		cin>>val;
		if (val < 100){
			c ++;
		}
		s += val;
		i++;
	}
	if (s > 1000) {
		sconto = s/10;
	}
	tot = s - sconto;
	cout<<"Prezzo totale: "<<tot<<endl<<"Sconto applicato: "<<sconto;

	return 0;
}

