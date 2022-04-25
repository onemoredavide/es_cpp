#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int g,p,t=0,i=1;
	ifstream r;
	r.open("input.txt");
	r>>g>>p;
	r.close();
	while (g>=0){
		(g>=i) ? t+=i : t+=g;
		g-=i+p-1;
		i++;
	}
	ofstream w;
	w.open("output.txt");
	w<<t;
	w.close();
	return 0;
}

