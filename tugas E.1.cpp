#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int b1, b2;
	//b1 : bilangan pertama
	//b2 : bilangan kedua
	
	cout<<"input b1 : \n"; cin>>b1;
	cout<<"input b2 : \n"; cin>>b2;
	if (b1%b2==0)
		cout<<"b1 kelipatan b2\n";
	else
		cout<<"b1 bukan kelipatan b2\n";
	
	system("PAUSE");
	return 0;
}
