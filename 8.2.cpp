#include <iostream>
using namespace std;
int main(){
	int c;
	struct datamhs {
		char nama[20];
		long int nim;
		int umur;
		int nilai;
		char huruf;
	};
	datamhs mhs[10];
	for(c=1; c<=5; c++){
		cout<<"Mahasiswa ke-"<<c<<endl;
		cout<<"--------------\n";
		cout<<"Nama   : "; cin>>mhs[c].nama;
		cout<<"NIM    : "; cin>>mhs[c].nim;
		cout<<"Umur   : "; cin>>mhs[c].umur;
		cout<<"Nilai  : "; cin>>mhs[c].nilai;
		if(mhs[c].nilai<=100 && mhs[c].nilai>=80){
			cout<<"Predikat A\n";
		}
		if(mhs[c].nilai<=79 && mhs[c].nilai>=70){
			cout<<"Predikat B\n";
		}
		if(mhs[c].nilai<=69 && mhs[c].nilai>=50){
			cout<<"Predikat C\n";
		}
		if(mhs[c].nilai<59 && mhs[c].nilai>=40){
			cout<<"Predikat D\n";
		}
		if(mhs[c].nilai<=39 && mhs[c].nilai>=0){
			cout<<"Predikat E\n";
		} cout<<endl;
	}
}
