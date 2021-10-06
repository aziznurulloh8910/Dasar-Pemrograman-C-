#include <iostream>
using namespace std;
int main(){
	int n, x;
	
	cout<<"masukkan nilai n : \n"; cin>>n;
	for(x=1; x<=n; x++){
		cout<<x<<" ";
		if(x%5==0){
			cout<<endl;
		}
	} cout<<endl;
	system("PAUSE");
}
