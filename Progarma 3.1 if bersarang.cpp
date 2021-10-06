#include <iostream>
using namespace std;
int main(){
	int k=5, g=5, b=-3, c=2, d=5, p;
	
	if(k>9)
	{
		if(c<=4)
			b=b+4;
		else
		{
			cout<<"Bandung\n";
			b=b-2;
		}
	}
	else {
		if (g!=4)
		{
			cout<<"JAKARTA\n";
			d=d/4;
		}
		else
			d=d%4;
	}
	p=d+b;
	cout<< p;
	return 0;
}
