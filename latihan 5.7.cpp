#include <iostream>
using namespace std;
int main(){
	int x, n;
	
	cout<<"input nilai n : \n"; cin>>n;
	cout<<"Bilangan genap positif sebanyak n\n";
	cout<<"---------------------------------\n";
	n=n*2;
	for(x=0; x<=n; x+=2){
		cout<<x<<" ";
	}
	cout<<endl;
	system("PAUSE");
}
