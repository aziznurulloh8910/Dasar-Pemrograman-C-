#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float a, t, c;
	
	cout<<"Menghitung sisi Segitiga\n";
	cout<<"------------------------\n";
	cout<<"berapa alasnya : \n";
	cin>>a;
	cout<<"berapa tingginya : \n";
	cin>>t;
	c= sqrt((a*a)+(t*t));
	cout<<"------------------------\n";
	cout<<"panjang sisinya adalah :"<<c; 
	
	return 0;
}
