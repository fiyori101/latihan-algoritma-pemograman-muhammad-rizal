#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main () {
	cout<< fixed<< setprecision (0);
	char nama[20],gol[5],kode[5],jabatan[25];
	float gaji,tunjangan,pinjman,pajak,gjikotr,gjibersih;
	char lagi;
	int peg=0;
	int hasil=0;
	
	cout << "===================== GAJI PEGAWAI PT. TELKOM ======================="<<endl;
	cout << "---------------------------------------------------------------------"<<endl;
	
	do{
		system("cls");
		
		cout<< " Pegawai Ke :"<< peg +1 <<endl;
		cout <<" Nama Pegawai             : ";
		cin >> nama;
		cout <<"Golongan                  : ";
		cin >> gol;
		cout <<"Kode Jabatan              : ";
		cin >>kode;
	
		hasil = strcmp(gol,"Ia");
		if (hasil==0){
			gaji =500000;
		}	
		hasil= strcmp (gol,"IIa");
		if (hasil==0){
			gaji= 750000;
		}
		hasil = strcmp (gol,"IIIa");
		if (hasil == 0) {
			gaji =1000000;
		}
		hasil = strcmp (gol,"Ib");
		if(hasil ==0){
			gaji =1500000;
		}
		hasil = strcmp (gol, "IIb");
		if (hasil ==0){
			gaji= 1750000;
		}
		hasil = strcmp (gol, "IIIb");
		if (hasil ==0){
			gaji =2500000;
		}
		
		hasil= strcmp (kode,"Dir");
		if (hasil==0){
			strcpy(jabatan, "Direktur");
			tunjangan =450000;
		}
		hasil= strcmp (kode,"Wak");
		if (hasil==0){
			strcpy (jabatan ,"Wakil Direktur");
			tunjangan =375000;
		}
		hasil= strcmp (kode ,"Sek");
		if (hasil ==0){
			strcpy (jabatan, "Sekretaris");
			tunjangan =300000;
		}
		hasil= strcmp (kode ,"Stf");
		if (hasil ==0){
			strcpy (jabatan, "Staf Pegawai");
			tunjangan = 200000;
		}
		cout <<"Jabatan                    : "<< jabatan<<endl;
		cout <<"Gaji                       : "<<gaji <<endl;
		cout <<"Tunjangan                  : "<<tunjangan<<endl;
		cout <<"Pinjaman                   : ";
		cin >> pinjman;
		
		pajak =0.05 *gaji;
		cout <<"Pajak                      : "<<pajak <<endl;
		gjikotr = gaji - tunjangan ;
		cout << "Gaji Kotor                : "<<gjikotr <<endl;
		gjibersih = gjikotr -pinjman -pajak;
		cout <<"Gaji Bersih                : "<<gjibersih <<endl;
		cout <<"---------------------------------------------------------------"<< endl;
		
		peg++;
		
		cout <<endl;
	    cout << "Ingin Lanjut Menghitung Gaji Lagi ? [Y/T]: ";
	    cout << endl;
	    lagi = getch ();
	    
	    
	}while (lagi== 'Y'|| lagi =='y');
	if(lagi=='T'|| lagi == 't'){
		system ("cls");
	}
	return 0;
}
