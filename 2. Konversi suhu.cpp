#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float celcius, reamur, fahrenheit;
	
	cout<<"KONVERSI SUHU\n";
	cout<<"------------------------\n";
	cout<<"berapa suhu dalam celcius : \n";
	cin>>celcius;
	
	fahrenheit=9/5*celcius+32;
	cout<<"suhu dalam fahrenheit : \n"<<fahrenheit;
	cout<<"\n------------------------\n";
	
	reamur=celcius*4/5;
	cout<<"suhu dalam reamur : \n"<<reamur;
	cout<<"\n------------------------\n";
	
	
	return 0;
}
