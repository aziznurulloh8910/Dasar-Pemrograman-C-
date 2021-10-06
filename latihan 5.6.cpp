#include <iostream>
using namespace std;
int main(){
	int x, y;
	
	cout<<"input tahun ke x : \n"; cin>>x; //batas tahun pertama
	cout<<"input tahun ke y : \n"; cin>>y; //batas tahun terakhir
	for(x=x; x<=y; x++){
		if(x%4==0){
			cout<<x<<" ";
		}
	} cout<<endl;
	system("PAUSE");
}
