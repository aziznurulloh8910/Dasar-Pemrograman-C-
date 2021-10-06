#include <iostream>
using namespace std;
int main(){
	int n;
	for(n=1; n<=100; n+=3){
		if(n%7==0){
			continue;
		}
		cout<<n<<" ";
	}
	cout<<endl;
	system("PAUSE");
}
