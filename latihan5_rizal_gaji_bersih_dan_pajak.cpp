#include<iostream>
#include<iomanip>

using namespace std;

int main ()
{
	char nampeg[20],namjab[20];
	float gaji,pajak,pinjaman,gbersih=0;
	cout<<"nama pegawai : ";
	cin>>nampeg;
	cout<<"jabatan : ";
	cin>>namjab;
	cout<<"gaji : ";
	cin>>gaji;
	cout<<setprecision(13);
	pajak=0.15*gaji;
	cout<<"pajak : "<<pajak<<endl;
	cout<<"pinjaman : ";
	cin>>pinjaman;
	gbersih=gaji-(pinjaman+pajak);
	cout<<"gaji bersih : " <<gbersih<<endl;
	return 0 ;
	
	
}
