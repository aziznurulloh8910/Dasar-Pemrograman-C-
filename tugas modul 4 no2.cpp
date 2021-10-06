#include <iostream>
using namespace std;
int main(){
	int x, y, i, k, n;
	char c;
	
	menu:
		cout<<"Program tahun kabisat antara \n";
		cout<<"input tahun ke x : \n"; cin>>x;//batas tahun pertama 
		cout<<"input tahun ke y : \n"; cin>>y;//batas tahun kedua
		cout<<"tahun kabisatnya adalah : \n";
		i=x;
		while(i<=y){
			cout<<i<<" ";
			i+=4;
		}
		cout<<endl;
		cout<<endl;
	
	kembali:
		cout<<"Lagi?tekan huruf c\n";
		if(c=='c'){
			goto menu;
		}
}
