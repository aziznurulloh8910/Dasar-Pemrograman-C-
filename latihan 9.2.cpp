#include <iostream>

using namespace std;

int celciusToFahrenheit(int celcius){
	int fahrenheit;
	fahrenheit = 9/5 * celcius + 32;
	return fahrenheit;
}

int celciusToReamur(int celcius){
	int reamur;
	reamur = 0.8 * celcius;
	return reamur;
}

int main(){
	int c;
	
	cout << "Input suhu Celcius : ";
	cin >> c;
	
	cout << "HASIL : " << endl;
	cout << "Fahrenheit : " << celciusToFahrenheit(c) << endl;
	cout << "Reamur     : " << celciusToReamur(c)<< endl;
	
	return 0;
}
