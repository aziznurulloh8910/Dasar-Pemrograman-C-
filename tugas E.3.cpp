#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	cout<<"      Program Konversi Nilai"<<endl;
	cout<<"================================="<<endl;
	int nilai;
	
	cout<<"Masukan Nilai: \n"; cin>>nilai;
	
	if(nilai>=80 && nilai<=100)
	{
		cout<<"Anda Mendapat Nilai A";
	}
	else if(nilai>=65.0 && nilai<=79.9)
	{
		cout<<"Anda Mendapat Nilai B";
	}
	else if(nilai>=55.0 && nilai<=64.9){
		cout<<"Anda Mendapat Nilai C";
	}
	else if(nilai>=45.0 && nilai<=54.9){
		cout<<"Anda Mendapat Nilai D";
	}
	else if((nilai>=0) && (nilai<=44.9)){
		cout<<"Anda Mendapat Nilai E";
	}
	else{
		cout<<"Nilai yang anda masukan salah";
	}
	getch();
	
	return 0;
}
