#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	// Data una sequenza di lunghezza N (con N letto da input) di numeri naturali, calcolare la percentuale dei pari 
	// e dei dispari.
	
	int n,i=0, cp=0, cd=0, val;
	do{
		cin>>n;
	} while(n<0);
	
	while(i<n){
		cin>>val;
		if(val%2==0){
			cp++;
		}else{
			cd++;
		}
		i++;
	}
	float perc_pari = (float)cp*100/n, perc_dispari = (float)cd*100/n;
	cout<<"PERCENTUALE PARI: "<<perc_pari<<"%"<<endl;
	cout<<"PERCENTUALE DISPARI: "<<perc_dispari<<"%"<<endl;

	return 0;
}

