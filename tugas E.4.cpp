#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int j1, m1, j2, m2, s1, s2;
	//s1 : selisih jam
	//s2 : selilih menit
	//j1 : jam masuk
	//j2 : jam keluar
	//m1 : menit masuk
	//m2 : menit keluar
	
	cout<<"Menghitung Selisih waktu\n";
	cout<<"------------------------\n";
	cout<<"input jam masuk : \n"; cin>>j1;
	cout<<"input menit masuk : \n"; cin>>m1;
	cout<<"input jam keluar : \n"; cin>>j2;
	cout<<"input menit keluar : \n"; cin>>m2;
	cout<<"=============================\n";
	
	//menghitung selisih menit
	if ((m2-m1)<0)
		s2=(60+m2)-m1;
	else
		s2=m2-m1;
	
	//menghitung selisih jam
	if (j1==j2)
		s1=j2-j1;
	else
		s1=(j2-j1)-1;
	
	cout<<"selisih waktunya adalah "<<s1<<" jam "<<s2<<" menit"<<endl;
	cout<<"============================\n";
	
	system("PAUSE");
	return 0;
}
