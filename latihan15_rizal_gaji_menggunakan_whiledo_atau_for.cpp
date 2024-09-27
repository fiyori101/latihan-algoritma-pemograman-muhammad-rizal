#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	char nampeg[25],jbtan[20];
	float gaji,pajak,pinjaman,gbersih;
	
cout<<"GAJI KARYAWAN STMIK PENUSA"<<endl;
cout<<"---------------------------"<<endl;

for(int i=1; i<=10; i++){

cout<<"Nama Pegawai :" <<i<<" : ";
cin>>nampeg;
cout<<"Jabatan :";
cin>>jbtan;
cout<<"Gaji = ";
cin>>gaji;
cout<<setprecision(13);
pajak=gaji*0.15;
cout<<"pajak = "<<pajak<<endl;
cout<<"pinjaman =";
cin>>pinjaman;
gbersih=gaji-(pinjaman+pajak);
cout<<"Gaji Bersih ="<<gbersih<<endl;
cout<<endl; 
}



return 0;}
