#include <iostream>
using namespace std;
int main(){
	int i, j;
	//analisa a
	cout<<"bagian a\n\n";
	for(i=1; i<=3; i++){
		for(j=1; j<=5; j++){
			cout<<"* ";
		} cout<<endl;
	} cout<<endl;
	//analisa b
	cout<<"bagian b\n\n";
	for(i=1; i<=3; i++){
		for(j=1; j<=4; j++){
			cout<<"* ";
		} cout<<endl;
	} cout<<endl;
	//analisa c
	cout<<"bagian c\n\n";
	for(i=1; i<=3; i++){
		for(j=1; j<=i; j++){
			cout<<"* ";
		} cout<<endl;
	}
	system("PAUSE");
}
