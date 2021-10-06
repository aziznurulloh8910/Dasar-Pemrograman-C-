#include <iostream>
using namespace std;
int main(){
	float n, i, j;
	char y;
	
	menu:
		cout<<"deret angka dan nilai rata-ratanya \n";
		cout<<"input n : \n"; cin>>n;
		i=0;
		while(i<=n){
			cout<<i<<" ";
			j=n*(i+1)*0.5/n;
			i++;
		}
		cout<<endl;
		cout<<"nilai rata2 dari deret tsb = "<<j;
		cout<<endl;
		cout<<endl;
	
	kembali:
		cout<<"mau lagi?(y/t)\n"; cin>>y;
		cout<<endl;
		if(y==y){
			goto menu;
		}
}
