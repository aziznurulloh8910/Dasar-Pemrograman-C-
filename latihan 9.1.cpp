#include <iostream>

using namespace std;

int maks(int a, int b){
	int temp;
	
	if(a < b){
		temp = b;
		b = a;
		a = temp;
	}
	
	cout << "bilangan terbesar : " << a;
}

int main(){
	int bil1, bil2, hasil=0;
	
	cout << "Input Bilangan1 : ";
	cin >> bil1;
	cout << "Input Bilangan2 : ";
	cin >> bil2;
	
	maks(bil1, bil2);
	
}
