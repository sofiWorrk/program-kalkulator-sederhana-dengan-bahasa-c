#include <iostream>
using namespace std;
int main(){
	double pertama,kedua,jum;
	int pil;
	string ulang;
	cout<<"Silahkan Pilih jenis operasi\n";
	cout<<"=============================\n";
	cout<<"1.pertambahan\n";
	cout<<"2.pengurangan\n";
	cout<<"3.perkalian\n";
	cout<<"4.pembagian\n";
	cout<<"=============================\n";
	cout<<"\n";
	do{
	cout<<"Ketikan Angka pertama =";
	cin>>pertama;
	cout<<"Ketikan Angka kedua =";
	cin>>kedua;
	
	cout<<"Pilih jenis operasi :";
	cin>>pil;
	
		
	switch (pil){
		
		case 1:
			cout<<"1.pertambahan\n";
			jum=pertama+kedua;
			cout<<"hasil dari pertamabahan di atas adalah ="<<jum<<endl;
		break;case 2:
			cout<<"2.pengurangan\n";
			jum=pertama-kedua;
			cout<<"hasil dari pertamabahan di atas adalah ="<<jum<<endl;
		break;
		case 3:
			cout<<"3.pertambahan\n";
			jum=pertama*kedua;
			cout<<"hasil dari pertamabahan di atas adalah ="<<jum<<endl;
		break;
		case 4:
			cout<<"4.pembagian\n";
			jum=pertama/kedua;
			cout<<"hasil dari pertamabahan di atas adalah ="<<jum<<endl;
		break;
		
	
			
			
	}
		cout<<"ulangi proses (y/n) :";
		
	cin>>ulang;
	}while (ulang=="y");
	cout<<"Terimakasih.............";
}
