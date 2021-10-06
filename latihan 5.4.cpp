#include <iostream>
using namespace std;
int main(){
	int x, y, n;
	
	cout<<"masukkan nilai n : \n"; cin>>n;
	//dimasukkan ke dalam persamaan x = x*x - 2*x -8
	for(x=1; x<=n; x++){
		cout<<"x = "<<x;
		cout<<" maka x = "<<y; cout<<endl;
		y=(x*x)-(2*x)-8;
	}
	cout<<endl;
	system("PAUSE");
}
