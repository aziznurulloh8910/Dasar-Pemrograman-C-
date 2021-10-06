#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int tb, tp;
	
	cout<<"masukan total belanja : Rp. \n"; cin>>tb;
	if (tb>500000)
		tp=tb-tb*10/100;
	else if (tb>250000)
		tp=tb-tb*5/100;
	else
		tp=tb;

	cout<<"jumlah tp (tagihan pembayaran) anda adakah : Rp. \n"<<tp;
	return 0;
}
