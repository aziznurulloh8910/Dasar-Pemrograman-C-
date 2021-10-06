#include <iostream>
using namespace std;
int main(){
	int n, z, bil;
	float jml=0, rata2;
	
	cout<<"menghitung rata-rata n bilangan\n"; 
	cout<<"--------------------------------\n";
	cout<<"masukkan banyak data n : \n"; cin>>n;
	
	for(z=1; z<=n; z++){
		cout<<"masukkan bilangan ke-"<<z<<" : "; cin>>bil;
		jml=jml+bil;
	}
	rata2=jml/n;
	cout<<"Rata-ratanya = "<<rata2;
	cout<<"\n\n";
	
	system ("PAUSE");
}
