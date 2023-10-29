#include <iostream>
using namespace std;
int main(){
	int m,tot=90;
	int diskon;
	cout<<"  Masukan Pesanan Anda      : ";
	cin>>m;
	
	int toto=m*tot;
	
	if(toto>=100){
		cout<<" =======================================\n";
		cout<<"  Anda Mendapatkan Diskon Sebesar 50%\n ";
		cout<<"=======================================\n";
		diskon=toto-0.5;
	}else if (toto<=100){
		cout<<" =======================================\n";
		cout<<"  Anda Tidak Mendapatkan Bonus\n";
		cout<<" =======================================\n";
	}
	cout<<"  Hasil Anda                : "<<toto<<"\n";
	cout<<"  Masukan PEsanan Anda      : "<<m<<"\n";
	cout<<"  Hasil Keseluruhan         : Rp."<<toto<<".000"<<"\n";
	cout<<"  Biaya Yang Harus Di Bayar : Rp."<<diskon<<".000";
} 
