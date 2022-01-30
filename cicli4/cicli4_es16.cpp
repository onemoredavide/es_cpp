#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	/*
	Data una serie di numeri costituiti da “1” e “2” (effettuare il controllo) e terminante con “0” dire quanti sono
	gli “1” e quanti sono i “2”
	*/
	int val, c1=0, c2=0;
	do {
		cin>>val;
		if (val==0) break;
		(val==1) ? c1++ : c2++;
	} while (val!=0 && val==1 || val==2);
	return 0;
}

