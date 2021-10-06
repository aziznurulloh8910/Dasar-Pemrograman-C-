#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float r, t, p, l, volume, luas_permukaan, phi=3.14;
	int n;
	char y;
	menu:
	cout<<"==================================\n";
	cout<<"TUGAS PRAKTIKUM DASAR PEMROGRAMAN\n";
	cout<<"==================================\n";
	cout<<"Nama : AZIZ NURULLOH\n";
	cout<<"NIM  : 1197050023\n";
	cout<<"----------------------------------\n";
	cout<<"PILIH PROGRAM : \n";
	cout<<"1. Menghitung luas permukaan dan volume balok\n";
	cout<<"2. Menghitung luas permukaan dan volume tabung\n";
	cout<<"3. Menghitung luas permukaan dan volume bola\n";
	cout<<"input nomor untuk menjalankan salah satu program yang ditugaskan : \n";
	cin>>n;
	
	switch(n){
		case 1:
			system("cls");
			cout<<"menghitung luas permukaaan dan volume balok\n\n";
			cout<<"input panjang balok dalam satuan meter : "; cin>>p;
			cout<<"input lebar balok dalam satuan meter : "; cin>>l;
			cout<<"input tinggi balok dalam satuan meter : "; cin>>t;
			cout<<endl;
			
			volume=p*l*t;
			cout<<"----------------------------\n";
			cout<<"volumenya adalah "<<volume<<" meter\n";
			cout<<"----------------------------\n";
			
			luas_permukaan=(2*p*l)+(2*l*t)+(2*p*t);
			cout<<"----------------------------\n";
			cout<<"luas permukaannya adalah "<<luas_permukaan<<" meter\n";
			cout<<"----------------------------\n";
			
			goto kembali;
			break;
		case 2:
			system("cls");
			cout<<"Menghitung luas permukaan dan volume tabung\n";
			cout<<"masukan jari - jarinya (cm) : \n"; cin>>r;
			cout<<"masukan tingginya (cm) : \n"; cin>>t;
			
			volume=phi*r*r*t;
			cout<<"luas volumenya adalah "<<volume<<" cm";
			cout<<"\n";
			
			luas_permukaan=(2*phi*r*r)+(2*phi*r*t);
			cout<<"luas permukaan tabung adalah : "<<luas_permukaan<<" cm";
			
			goto kembali;
			break;
		case 3:
			system("cls");
			cout<<"Menghitung luas permukaan dan volume bola\n";
			cout<<"---------------------------------------\n";
			cout<<"masukan panjang jari-jarinya (cm): \n"; cin>>r;
			
			volume=phi*(pow(r,3))*4/3;
			cout<<"volume bola tersebut adalah : "<<volume<<" cm";
			cout<<"\n";
			
			luas_permukaan=4*phi*r*r;
			cout<<"luas permukaan bola tersebut adalah : "<<luas_permukaan<<" cm";
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
		cout<<"\n\n\n==================================\n";
		cout<<"\nkembali ke menu >> tekan y \n";
		cin>>y;
		if ( y== 'Y' || y=='y'){
			system("cls");
			goto menu;
		}
	return 0;
}
