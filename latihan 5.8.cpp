#include <iostream>
using namespace std;
int main(){
	int c, n;
	cout<<"input banyak n : \n"; cin>>n;
	for(c=1; c<=n; c+=2){
		if(c%c==0 && c%1==0){
			cout<<-c<<"  ";
		}
		else {
			cout<<c<<"  ";
		}
	}
	cout<<endl;
	
	system("PAUSE");
}
