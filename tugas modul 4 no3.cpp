#include <iostream>
using namespace std;
int main(){
	float bb, tb, i, ideal1, ideal;
	int n;
	char y;
	
	menu:
	cout<<" Menghitung Berat Badan Ideal\n";
	cout<<"------------------------------\n";
	cout<<" jenis kelamin : \n";
	cout<<" 1. laki-laki\n";
	cout<<" 2. perempuan\n";
	cin>>n;
	
	if (n==1)
	{
		system("cls");
		cout<<" input berat badan (kg)  : \n"; cin>>bb;
		cout<<" input tinggi badan (cm) : \n"; cin>>tb;
		
		ideal=(tb-100)-0.1*(tb-100);
		cout<<" brt ideal badan anda : "<<ideal<<endl;
		cout<<" Berat badan anda tergolong \n";
		
		if ((bb==ideal)||(bb==ideal+3)||(bb==ideal-3)){
			cout<<" IDEAL\n";
		}
		else {
			cout<<" TIDAK IDEAL\n";	
		}	
	}
	else if (n==2)
	{
		system("cls");
		cout<<" input berat badan (kg)  : \n"; cin>>bb;
		cout<<" input tinggi badan (cm) : \n"; cin>>tb;
		
		ideal=(tb-100)-0.1*(tb-100);
		cout<<" brt ideal badan anda : "<<ideal<<endl;
		cout<<" Berat badan anda tergolong \n";
		
		if ((bb==ideal)||(bb==ideal+2)||(bb==ideal-2)){
			cout<<" IDEAL\n";
		}
		else {
			cout<<" TIDAK IDEAL\n";	
		}	
	}
	else 
	{
		cout<<" salah input\n";
	}
	
		kembali:
		cout<<"\n\n\n=========================\n";
		cout<<"\nkembali ke menu >> tekan y \n";
		cin>>y;
		do {
			system("cls");
			goto menu;
		}while( y== 'Y' || y=='y');
	return 0;
}
