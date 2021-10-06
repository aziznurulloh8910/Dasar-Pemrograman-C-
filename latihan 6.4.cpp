#include <iostream>
using namespace std;
int main(){
	int i, j;
	cout<<"bagian a\n";
	for(i=5; i>=1; i--){
		for(j=i; j<=5; j++){
			cout<<j<<" ";
		} cout<<endl;
	}
	cout<<"bagian b\n";
	for(i=1; i<=10; i++){
		if(i%2==1){
			for(j=i; j>=1; j--){
				if(j%2==1){
					cout<<j<<" ";
				}
			} cout<<endl;
		} 
	}
	cout<<"bagian c\n";
	for(i=8; i>=0; i--){
		if(i%2==0){
			for(j=i; j<=8; j++){
				if(j%2==0){
					cout<<j<<" ";
				}
			} cout<<endl;
		}
	}
	system("PAUSE");
}
