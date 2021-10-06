#include <iostream>
using namespace std;
int main(){
	int i, j, k;
	
	cout<<"bagian a\n\n";
	for(i=1; i<=5; i++){
		for(j=5; j>i; j--){
			cout<<"  ";
		}
		for(k=j; k>=1; k--){
			cout<<k<<" ";
		} cout<<endl;
	} cout<<endl;
	
	cout<<"bagian b\n\n";
	for(i=1; i<=5; i++){
		for(j=5; j>i; j--){
			cout<<"  ";
		}
		for(k=5; k>=6-i; k--){
			cout<<k<<" ";
		} cout<<endl;
	} cout<<endl;
	
	cout<<"bagian c\n\n";
	for(i=1; i<=5; i++){
		for(j=5; j>i; j--){
			cout<<"  ";
		}
		for(k=1; k<=j; k++){
			cout<<k<<" ";
		} cout<<endl;
	} cout<<endl;
	
	system("PAUSE");
}
