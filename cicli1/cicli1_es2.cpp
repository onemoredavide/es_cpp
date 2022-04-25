#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	// Inserire N numeri e visualizzare il maggiore e il minore (N<100)
	
	int n, max, min, val;
	int i = 0;
	do {
		cin>>n;
	} while (n >= 100);
	
	// CICLO FOR
	for (int j = 0; j < n; j++) {
		
		cin>>val;
		
		if (i == 0) { max = val; min = val; }
		else {
			if ( val > max ) { max = val; }
			if ( val < min ) { min = val; }
		}
	}
	
/*
	CICLO WHILE
	
	
	while (i < n)
	{
 		cin>>val;
		if( i==0 ) { max = val; min = val }
		else {
			if ( val > max ) { max = val; }
			if ( val < min ) { min = val; }
		}
		i++;
 	}
 */
	cout<<"MAX: "<<max<<" MIN: "<<min<<endl;
	
	return 0;
}

