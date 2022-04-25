#include <iostream>
#include <cstdlib>
using namespace std;

char input(){
	char ch;
	cin>>ch;
	return ch;
}
string base()
{
	char c;
	cin>>c;
	switch (c) {
		case 'A':
			return "adenina";
		case 'C':
			return "citosina";
		case 'G':
			return "guanina";
		case 'T':
			return "timina";
		default:
			return "ERRORE";
	}
}
int main(){
	cout<<base();
	return 0;
} 
