#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int bil;
	cout<<"masukan bilangan : \n";cin>>bil;
	if ((bil%2!=0)&&(bil>0))
		cout<<"bilangan ganjil positif\n";
	else
		cout<<"bukan bilangan ganjil positif\n";
	
	return 0;
}
