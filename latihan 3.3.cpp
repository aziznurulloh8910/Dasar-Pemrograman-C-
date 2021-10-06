#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float a, t, r, p, l, phi=3.14, luas;
	int n;
	char y;
	
	menu:
	cout<<"==================================\n";
	cout<<"TUGAS PRAKTIKUM DASAR PEMROGRAMAN\n";
	cout<<"==================================\n";
	cout<<"Nama : AZIZ NURULLOH\n";
	cout<<"NIM  : 1197050023\n";
	cout<<"----------------------------------\n";
	cout<<"    LATIHAN 3.3 IF BERSARANG \n";
	cout<<"----------------------------------\n";
	cout<<"MENU PROGRAM UNTUK : \n";
	cout<<"1. Menghitung luas segitiga\n";
	cout<<"2. Menghitung luas persegi panjang\n";
	cout<<"3. Menghitung luas lingkaran\n";
	cout<<"input nomor untuk menjalankan salah satu program yang ditugaskan : \n";
	cin>>n;
	
	switch(n){
		case 1:
			system("cls");
			cout<<"Menghitung Luas Segitiga\n";
			cout<<"------------------------\n";
			cout<<"berapa alasnya : \n";
			cin>>a;
			cout<<"berapa tingginya : \n";
			cin>>t;
			luas=a*t/2;
			cout<<"------------------------\n";
			cout<<"luasnya adalah : "<<luas; 
			goto kembali;
			break;
		case 2:
			system("cls");
			cout<<"Menghitung Luas Persegi Panjang\n";
			cout<<"------------------------\n";
			cout<<"berapa Panjangnya : \n";
			cin>>p;
			cout<<"berapa Lebarya : \n";
			cin>>l;
			luas=p*l;
			cout<<"------------------------\n";
			cout<<"luasnya adalah : "<<luas; 
			goto kembali;
			break;
		case 3:
			system("cls");
			cout<<"Menghitung luas dan keliling lingkaran\n";
			cout<<"---------------------------------------\n";
			cout<<"berapa jari-jarinya : \n";
			cin>>r;
			
			luas=phi*r*r;
			cout<<"\n------------------------------\n";
			cout<<"luasnya adalah : \n"<<luas; 
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
		cout<<"\n\n\n=========================================\n";
		cout<<"\nkembali ke menu >> tekan y \n";
		cin>>y;
		if ( y== 'Y' || y=='y'){
			system("cls");
			goto menu;
		}
	return 0;
}
