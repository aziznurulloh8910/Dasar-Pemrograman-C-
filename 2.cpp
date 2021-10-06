#include <iostream>

using namespace std;

int main(){
	
	int i, j, nilai[5][5];
	float r[5], x;
	
	cout<<"inputkan nilai mahasiswa\n";
	cout<<"------------------------\n";
	
	for(i=0; i<3; i++){
		cout << "Mahasiswa ke-" << (i+1) << " : \n";
		for (j=0; j<3; j++){
			cout << "Nilai Ke-" << (j+1) <<" : ";
			cin >> nilai[i][j];
		}
	}
	
	cout << "---------------------------------------------\n";
	cout << "    	      Data Nilai Mahasiswa\n";
	cout << "---------------------------------------------\n";
	cout << "Nilai Ke |	1	2	3	rata2\n";
	cout << "==============================================\n";
	for(i=0; i<3; i++){
	cout << "Mhs ke-" << (i+1) <<" : 	";
		for(j=0; j<3; j++) {
			cout << nilai[i][j] << "\t";
			r[i] += nilai[i][j];
			x = r[i]/3;
			if (j==2){
				cout << x;	
			}
		} cout << endl;
	}
}
