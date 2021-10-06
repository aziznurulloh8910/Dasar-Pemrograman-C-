#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
	float a, b, c;
	//a : sis deoan
	//b : sisi samping
	//c : sisi miring
	
	cout<<"Apakah 3 buah panjang garis berikut bisa membentuk segitiga  siku-siku\n\n";
	cout<<"masukan nilai panjang garis sisi depan : \n"; cin>>a;
	cout<<"masukan nilai panjang garis sisi samping : \n"; cin>>b;
	cout<<"masukan nilai panjang garis sisi miring : \n"; cin>>c;
	cout<<"============================================\n";
	if ((pow(a,2)+pow(b,2))==pow(c,2))
		cout<<"Dapat membentuk segitiga siku-siku\n";
	else
		cout<<"Tidak dapat membentuk segitiga\n";
		
	system("PAUSE");
	return 0;
}
