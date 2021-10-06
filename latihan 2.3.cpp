#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int tahun;
	cout<<"masukan tahun : \n"; cin>>tahun;
	if (tahun%400==0)
		cout<<"tahun "<<tahun<<" adalah tahun kabisat\n";
	else if (tahun%100==0)
		cout<<"tahun "<<tahun<<" adalah bukan tahun kabisat\n";
	else if (tahun%4==0)
		cout<<"tahun "<<tahun<<" adalah tahun kabisat\n";
	else
		cout<<"tahun "<<tahun<<" adalah bukan tahun kabisat\n";
		
	return 0;
}
