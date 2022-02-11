#include<cstdlib>
#include<iostream>
using namespace std;

int main (){
	int i;
	string s="case", strinv;
	strinv="";
	for (i=0;i<s.length(); i++) {
		strinv+=s[i];
	}
	cout<<strinv;
}


