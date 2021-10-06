#include <iostream>
using namespace std;
int main(){
	int i, j;
	cout<<"analisa bagian a\n";
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			cout<<i<<" ";
		} cout<<endl;
	}
	
	cout<<"analisa bagian b\n";
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			cout<<j<<" ";
		} cout<<endl;
	}
	system("PAUSE");
}
