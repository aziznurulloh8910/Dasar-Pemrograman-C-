#include <iostream>
using namespace std;
int main(){
	int i, j, k;
	
	cout<<"bagian a\n\n";
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){
			cout<<"* ";
		}cout<<endl;
	} cout<<endl;
	
	cout<<"bagian b\n\n";
	for(i=1; i<=5; i++){
		for(j=1; j<i; j++){
			cout<<"  ";
		}
		for(k=5; k>=i; k--){
			cout<<"* ";
		} cout<<endl;
	} cout<<endl;
	
	cout<<"bagian c\n\n";
	for(i=1; i<=5; i++){
		for(j=i; j<=5; j++){
			cout<<j<<" ";
		}cout<<endl;
	} cout<<endl;
	
	cout<<"bagian d\n\n";
	for(i=1; i<=5; i++){
		for(j=i; j>1; j--){
			cout<<"  ";
		}
		for(k=5; k>=i; k--){
			cout<<k<<" ";
		} cout<<endl;
	} cout<<endl;
	
	system("PAUSE");
}
