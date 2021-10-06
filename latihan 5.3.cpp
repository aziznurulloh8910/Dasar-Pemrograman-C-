#include <iostream>
using namespace std;
int main(){
	int c, n;
	cout<<"input banyak n : \n"; cin>>n;
	for(c=1; c<=n; c++){
		if(c%2==0){
			cout<<-c<<"  ";
		}
		else {
			cout<<c<<"  ";
		}
	}
	cout<<endl;
	
	system("PAUSE");
}
