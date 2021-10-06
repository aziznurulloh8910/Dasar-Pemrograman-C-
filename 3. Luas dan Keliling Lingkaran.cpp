#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float phi=3.14, r, luas, keliling;
	
	cout<<"Menghitung luas dan keliling lingkaran\n";
	cout<<"---------------------------------------\n";
	cout<<"berapa jari-jarinya (cm) : \n";
	cin>>r;
	
	luas=phi*r*r;
	keliling=2*phi*r;
	cout<<"\n------------------------------\n";
	cout<<"luasnya adalah : \n"<<luas<<" cm"; 
	cout<<"\n------------------------------\n";
	cout<<"kelilingnya adalah : \n"<<keliling<<" cm";
	cout<<"\n------------------------------\n";
	
	return 0;
}
