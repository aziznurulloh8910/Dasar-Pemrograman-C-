#include <iostream>
using namespace std;
int main(){
	int i, j, k;
	
	cout<<"bagian a\n";
	for(i=5; i>=1; i--){
		for(j=i; j>=1; j--){
			cout<<"  ";
		}
		for(k=1; k<=6-i; k++){
			cout<<"* ";
		}
		for(k=1; k<6-i; k++){
			cout<<"* ";
		} cout<<endl;
	}
	
	cout<<"bagian b\n";
	for(i=6
	; i>=1; i--){
		for(j=i; j>=1; j--){
			cout<<"  ";
		}
		for(k=1; k<=6-i; k++){
			cout<<k<<" ";
		}
		for(k=1; k<6-i; k++){
			cout<<k<<" ";
		} cout<<endl;
	}  
}
