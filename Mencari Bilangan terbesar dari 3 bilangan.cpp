#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float bil1, bil2, bil3, terbesar;
	
	cout<<" Bilangan Terbersar dari \n";
	cout<<" input bilangan pertama : \n"; cin>>bil1;
	cout<<" input bilangan kedua : \n"; cin>>bil2;
	cout<<" input bilangan ketiga : \n"; cin>>bil3;

	if (bil1>bil2){
		terbesar=bil1;	
	}
	else if (bil3>terbesar){
		terbesar=bil3;
	}
	else 
		terbesar=bil2;
	cout<<endl;
	cout<<"Nilai terbesar = "<<terbesar;
	cout<<endl;
	
	return 0;
}
