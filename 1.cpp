#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int i, j, r, bil[10];
	float sd, sdtotal;
	cout<<"masukkan 5 buah bilangan\n";
	cout<<"------------------------\n";
	for(i=0; i<5; i++){
		cout<<"Bilangan ke-"<<(i+1)<<" : ";
		cin>>bil[i];
	}
	cout<<"\nBilangan yang diinput : \n";
	for(j=0; j<5; j++){
		cout<<bil[j]<<" ";
		r+=bil[j];
	}
	
	r=r/5;
	cout<<"\nRata-ratanya : "<<r;
	
	for(i=0; i<5; i++) {
		sd = pow(bil[i]-r, 2);
		sdtotal+=sd;
	}
	cout<<"\nstandar deviasinya adalah "<<sqrt((sdtotal)/(i-1));
}
