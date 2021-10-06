#include <iostream>
using namespace std;
int main(){
	int n, i, j;
	char y;
	
	menu:
		cout<<"deret angka dan hasil penjumlahan semua angka dengan batas n\n";
		cout<<"masukan n : \n"; cin>>n;
		i=0;
		while(i<=n){
			cout<<i<<" ";
			j=n*(i+1)/2;
			i++;
		}
		cout<<endl;
		cout<<j;
		cout<<endl;
		cout<<endl;
	
	kembali:
		cout<<"mau lagi?(y/t)\n"; cin>>y;
		cout<<endl;
		if(y==y){
			goto menu;
		}
}
