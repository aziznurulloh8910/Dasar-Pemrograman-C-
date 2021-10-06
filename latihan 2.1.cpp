#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float bil, k, hasil;
	
	menu:
	cout<<"========================\n";
	cout<<"      LATIHAN 2.1       \n";
	cout<<"========================\n";
	cout<<"\n";
	cout<<"input bilangan : \n"; cin>>bil;
	if (bil>=1)
		cout<<"BILANGAN POSTIF\n";
	else if ((bil<1)&&(bil>-1))
		cout<<"bilangan tidak keduanya (NOL)\n";
	else{
		cout<<"bilangan Negatif\n";
		}
	return 0;
}
