#include <iostream>

using namespace std;

char keHuruf(int nilai){
	char huruf;
	
	if((nilai > 80) && (nilai <= 100)){
		cout << "Nilai : A " << endl;
	}
	else if((nilai > 70) && (nilai <= 80)){
		cout << "Nilai : B " << endl;
	}
	else if((nilai > 60) && (nilai <= 70)){
		cout << "Nilai : C " << endl;
	}
	else if((nilai > 50) && (nilai <= 60)){
		cout << "Nilai : D " << endl;
	}
	else if((nilai >=0) && (nilai <= 55)){
		cout << "Nilai : E " << endl;
	}
	else {
		cout << "input dengan benar" << endl;
	}
	
	return huruf;
}

int predikat(int nilai){
	if(nilai > 80 && nilai <= 100){
		cout << "Excellent!" << endl;
	}
	else if(nilai > 70 && nilai <= 80){
		cout << "Good Job!" << endl;
	}
	else if(nilai > 60 && nilai <= 70){
		cout << "Study Harder!" << endl;
	}
	else if(nilai > 50 && nilai <= 60){
		cout << "Sorry, you failed!" << endl;
	}
	else if(nilai >=0 && nilai <= 55){
		cout << "Sorry, you failed!" << endl;
	}
	else {
		cout << "input dengan benar" << endl;
	}
	
	return 0;
}

int main(){
	int n; 
	char huruf;
	
	cout << "Inputkan Nilai : ";
	cin >> n;
	keHuruf(n);
	predikat(n); 
	
	return 0;
}
