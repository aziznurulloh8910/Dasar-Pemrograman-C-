#include <iostream>
using namespace std;
int main(){
	int c, n;
	long int faktorial;
	
	cout<<"input nilai n : \n"; cin>>n;
	faktorial=1;
	for(c=1; c<=n; c++){
		faktorial=faktorial*c;
		cout<<"Hasil Faktorial dari "<<c<<" adalah "<<faktorial<<"\n";
	}
	
	
	system("PAUSE");
}
