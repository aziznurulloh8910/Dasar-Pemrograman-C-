#include <iostream>
using namespace std;
int main(){
	int bil;
	char lagi;

	do{
		cout<<"input bilangan \n";
		cin>>bil;
		cout<<"mau lagi?(y/t)";
		cin>>lagi;
	}
	while(lagi=='y');
	cout<<endl;
	system("PAUSE");
}
