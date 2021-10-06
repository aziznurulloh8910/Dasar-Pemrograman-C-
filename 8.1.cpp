#include <iostream>
using namespace std;
int main(){
	struct waktu {
		int hh;
		int mm;
	};
	waktu wm, wk;
	int swh, swm;
	
	cout<<"Jam masuk	: "; cin>>wm.hh;
	cout<<"Menit masuk	: "; cin>>wm.mm;
	cout<<"Jam keluar	: "; cin>>wk.hh;
	cout<<"Menit Keluar	: "; cin>>wk.mm;
	cout<<"-------------------\n";
	cout<<"Waktu masuk	: "<<wm.hh<<" : "<<wm.mm<<endl;
	cout<<"Waktu keluar	: "<<wk.hh<<" : "<<wk.mm<<endl;
	cout<<"---------------------\n";
	swh=wk.hh-wm.hh;
	swm=wk.mm-wm.mm;
	if(swh<0){
		swh=swh*(-1);
	}
	else if(swm<0){
		swm=swm*(-1);
	}
	cout<<"Selisih Waktu : "<<swh<<" : "<<swm;
}
