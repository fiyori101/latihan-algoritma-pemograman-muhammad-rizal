#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char nampeg[30];
	float penjualan,komisi;
	
	cout<<"HASIL PENJUALAN PEGAWAI DAN BONUS KOMISINYA "<<endl;
	cout<<"-----------___________------------"<<endl;
	cout<<"Nama Pegawai :";
	gets(nampeg);
	cout<<"Jumlah Penjualan Pegawai : ";
	cin>>penjualan;
	komisi=penjualan*0.10;
	
	if(penjualan<500000){komisi=0;
	}
	else if (penjualan >=500000 &&penjualan <500001) {komisi =penjualan*0.10;
	} else if(penjualan >500000) {komisi=(500000*0.10)+(penjualan-500000)*0.15;
	} 
	cout<<"Bonus Komisi Pegawai : "<<komisi<<endl;
	return 0;
	}
	
