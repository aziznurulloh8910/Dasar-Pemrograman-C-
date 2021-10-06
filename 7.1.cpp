#include <iostream>
using namespace std;
int main(){
	int i, j, r, bil[10];
	cout<<"masukkan 5 buah bilangan\n";
	cout<<"------------------------\n";
	for(i=0; i<5; i++){
		cout<<"Bilangan ke-"<<(i+1)<<" : ";
		cin>>bil[i];
	}
	cout<<"Bilangan yang diinput : \n";
	for(j=0; j<5; j++){
		cout<<bil[j]<<" ";
	} cout<<endl;
	
	r=bil[i]/5;
	cout<<"nilai rata-ratanya : "<<r;
}
