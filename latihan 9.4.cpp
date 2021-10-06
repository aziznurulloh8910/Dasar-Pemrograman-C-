#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int maksimal(int data[], int jumlahData)
{
    int maks = data[0];
    for (int i = 0; i < jumlahData; i++)
    {
            if (maks < data[i])
            {
                maks = data[i];
            }
        
    }
    return maks;
}

//float deviasi(int n){}

int main(){
	int n, data[1];
	float mean, devias;
	
	cout << "Jumlah data : ";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cout << "data ke-" << i+1 << " : " ;
		cin >> data[i];
	}
	
	mean = ratarata(data[i], n);
	cout << "Rata-ratanya : " << mean;
}
