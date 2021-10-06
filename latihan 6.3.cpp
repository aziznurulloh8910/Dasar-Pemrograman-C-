#include <iostream>
using namespace std;
int main(){
	int i, j;
	cout<<"program bagian a\n";
	for(i=5; i>=1; i--){
		for(j=5; j>=i; j--){
			cout<<i<<" ";
		} cout<<endl;
	}
	
	cout<<"\nprogram bagian b\n\n";
	for(i=5; i>=1; i--){
		for(j=5; j>=i; j--){
			cout<<j<<" ";
		} cout<<endl;
	}
	system("PAUSE");
}
