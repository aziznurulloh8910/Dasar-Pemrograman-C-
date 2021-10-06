#include <iostream>
using namespace std;
int main(){
	float bb, tb, i, ideal1, ideal;
	int n;
	
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
		
		if ((ideal-bb>=2.5)||(bb==ideal+3)){
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
		
		if ((ideal-bb>=1.5)||(ideal-bb>=2.5)){
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
	

	return 0;
}
