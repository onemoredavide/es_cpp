#include <iostream>
using namespace std;
int main() {

	/*Scrivi un programma in cui l’utente inserisce numeri pari finchè lo desidera. Visualizzare le somme
	  progressive e la media dei numeri inseriti.*/
	
	int val, s=0, c=0;
	char r;
	do {
		do{
			cin>>val;
		} while (val%2==1);
		s+=val;
		c++;
		cout<<"SOMMA: "<<s<<" \nvuoi coninuare? (s/n) \n";
		cin>>r;
	} while (r!='n');
	float media=(float)s/c;
	cout<<"C: "<<c<<" MEDIA: "<<media;
	return 0;
}


