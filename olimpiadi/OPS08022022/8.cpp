#include<cstdlib>
#include<iostream>
#include <string>
using namespace std;

int main (){
	
	int freq,p;
	string testo = "Quel ramo del lago di Como";
	char lett='o';
	freq=0;
	for(p=0; p<testo.length(); p++){
		if (testo[p] == lett) {
			freq++;
		}
	}
	cout<<freq;
}



