#include <iostream>

using namespace std;

int Lpersegi(int s){
	int luas;
	luas = s * s;
	return luas;
}

int Kpersegi(int s){
	int kel;
	kel = 4 * s;
	return kel;
}

int LpersegiPanjang(int p, int l){
	int luas;
	luas = p * l;
	return luas;
}

int KpersegiPanjang(int p, int l){
	int kel;
	kel = 2 * (p + l);
	return kel;
}

float Lsegitiga(int a, int t){
	int luas;
	luas = 0.5 * a * t;
	return luas;
}

float Ksegitiga(int a){
	int kel;
	kel = a * 3;
	return kel;
}

float Llingkaran(int r){
	int luas;
	luas = 3.14 * r * r;
	return luas;
}

float Klingkaran(int r){
	int kel;
	kel = 3.14 * r * 2;
	return kel;
}

int main(){
	int n, luas;
	char ulang = 'y';
	
	cout << "Program menghitung luas bangun datar" << endl;
	do{
		cout << "--------------------" << endl;
		cout << "1. Persegi" << endl;
		cout << "2. Persegi panjang" << endl;
		cout << "3. Segitiga" << endl;
		cout << "4. lingkaran" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilih menu : ";
		cin >> n;
		
		switch(n){
			case 1:
				int s;
				cout << "Input Panjang sisinya : ";
				cin >> s;
				cout << "Luasnya  = " << Lpersegi(s) << endl;
				cout << "keliling = " << Kpersegi(s) << endl;
				break;
			case 2:
				int p, l;
				cout << "Input Panjangnya : ";
				cin >> p;
				cout << "Input lebarnya : ";
				cin >> l;
				cout << "Luasnya  = " << LpersegiPanjang(p,l) << endl;
				cout << "keliling = " << KpersegiPanjang(p,l) << endl;
				break;
			case 3:
				int a, t;
				cout << "Input alasnya : ";
				cin >> a;
				cout << "Input tingginya : ";
				cin >> t;
				cout << "Luasnya  = " << Lsegitiga(a,t) << endl;
				cout << "keliling = " << Ksegitiga(a) << endl;
				break;
			case 4:
				int r;
				cout << "Input jari-jarinya : ";
				cin >> r;
				cout << "Luasnya  = " << Llingkaran(r) << endl;
				cout << "keliling = " << Klingkaran(r) << endl;
				break;
			case 5:
				cout << "Thanks" << endl;
				ulang = 'x';
				break;
			default:
				cout << "input dengan benar" << endl;
		}
	} while(ulang == 'y');
	
	return 0;
}
