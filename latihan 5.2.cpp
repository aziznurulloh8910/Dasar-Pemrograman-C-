#include <iostream>
using namespace std;
int main(){
	int c, n, a;
	cout<<"input banyak n : \n"; cin>>n;
	for(c=1; c<=n; c++){
		if(c%2==0){
			cout<<-1<<"  ";
		}
		else {
			cout<<1<<"  ";
		}
	}
	cout<<endl;
	
	system("PAUSE");
}
