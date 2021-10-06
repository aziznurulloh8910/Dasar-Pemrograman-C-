#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float a, t, c, r, celcius, reamur, fahrenheit, luas, keliling, phi=3.14;
	int p;
	char y;
	menu:
	cout<<"==================================\n";
	cout<<"TUGAS PRAKTIKUM DASAR PEMROGRAMAN\n";
	cout<<"==================================\n";
	cout<<"Nama : AZIZ NURULLOH\n";
	cout<<"NIM  : 1197050023\n";
	cout<<"----------------------------------\n";
	cout<<"BUATLAH PROGRAM UNTUK : \n";
	cout<<"1. Menghitung sisi miring segitiga\n";
	cout<<"2. Mengkonversi Suhu Celcius ke reamur dan fahrenheit\n";
	cout<<"3. Menghitung luas dan keliling segitiga\n";
	cout<<"input nomor untuk menjalankan salah satu program yang ditugaskan : \n";
	cin>>p;
	
	switch(p){
		case 1:
			system("cls");
			cout<<"Menghitung sisi Segitiga\n";
			cout<<"------------------------\n";
			cout<<"berapa alasnya : \n";
			cin>>a;
			cout<<"berapa tingginya : \n";
			cin>>t;
			c= sqrt((a*a)+(t*t));
			cout<<"------------------------\n";
			cout<<"panjang sisinya adalah :"<<c; 
			goto kembali;
			break;
		case 2:
			system("cls");
			cout<<"berapa suhu dalam celcius : \n";
			cin>>celcius;
			
			fahrenheit=9/5*celcius+32;
			cout<<"suhu dalam fahrenheit : \n"<<fahrenheit;
			cout<<"\n------------------------\n";
			
			reamur=celcius*4/5;
			cout<<"suhu dalam reamur : \n"<<reamur;
			cout<<"\n------------------------\n";
			goto kembali;
			break;
		case 3:
			system("cls");
			cout<<"Menghitung luas dan keliling lingkaran\n";
			cout<<"---------------------------------------\n";
			cout<<"berapa jari-jarinya : \n";
			cin>>r;
			
			luas=phi*r*r;
			keliling=2*phi*r;
			cout<<"\n------------------------------\n";
			cout<<"luasnya adalah : \n"<<luas; 
			cout<<"\n------------------------------\n";
			cout<<"kelilingnya adalah : \n"<<keliling;
			cout<<"\n------------------------------\n";
			goto kembali;
			break;
		default:
			system("cls");
			cout<<"\n------------------------------\n";
			cout<<"pilihan anda salah\n";
			cout<<"------------------------------\n";
			break;
	}
	
	kembali:
		cout<<"\n\n\n===============================================\n";
		cout<<"\nkembali ke menu >> tekan y \n";
		cin>>y;
		if ( y== 'Y' || y=='y'){
			system("cls");
			goto menu;
		}
	return 0;
}
