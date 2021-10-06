#include <iostream>
using namespace std;
int main(){
	int i, j, k, n, m, o;
	cout<<"Tabel Perkalian\n";
	cout<<"-----------------\n";
	cout<<"input nilai n (1-10) : "; cin>>n;
	cout<<"input nilai m (1-10) : "; cin>>m;
	
	cout<<"* |\t";
	for(o=1; o<=m; o++){
		cout<<o<<"\t";
	} cout<<endl;
	if (n<=10){
		for(k=1; k<=m; k++){
			cout<<"--------";
		}
	} cout<<endl;
	for(i=1; i<=n; i++){
		cout<<i<<" |\t";
		for(j=1; j<=m; j++){
			cout<<(i*j)<<"\t";
		} cout<<endl;
	}
}
