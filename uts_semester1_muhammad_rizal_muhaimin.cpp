#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout <<fixed << setprecision (0);
	const int maxmaha = 360 ;
	string nama[maxmaha],npm[maxmaha],kode[maxmaha],jurusan[maxmaha];
	float byrawl[maxmaha],jlhcclan[maxmaha],bsrcclan[maxmaha],byran[maxmaha],ukuliah[maxmaha],terbayar[maxmaha],skuliah[maxmaha]; 
	char lagi;
	int nomaha =0;
	float ttlkuliah =0;
	
	
	cout <<"-----------PEMBAYARAN UANG KULIAH MAHASISWA PENUSA-----------" <<endl;
	cout <<"-------------------------------------------------------------" <<endl;
	cout <<endl;
	
	do{
		
		cout<<"Mahasiswa Ke-  "<<nomaha +1 <<endl;
		cout<<"Nama Mahasiswa               :";
		cin >>nama[nomaha];
		cout<<"NPM                          :";
		cin >>npm[nomaha];
		cout<<"Kode                         :";
		cin >>kode[nomaha];
		
		if(kode [nomaha] == "SI"){
			jurusan	 [nomaha] = "Sistem Informasi";
			byrawl 	 [nomaha] = 2100000 ;
			jlhcclan [nomaha] = 7 ;
			bsrcclan [nomaha] = 300000;
		}
		else if(kode [nomaha] == "TI"){
			jurusan  [nomaha] = "Teknik Informatika";
			byrawl 	 [nomaha] = 2500000 ;
			jlhcclan [nomaha] = 7 ;
			bsrcclan [nomaha] = 300000;
		}
		else if(kode [nomaha] == "KA"){
			jurusan  [nomaha] = "Komputer Akuntansi";
			byrawl 	 [nomaha] = 1700000 ;
			jlhcclan [nomaha] = 6 ;
			bsrcclan [nomaha] = 200000;
		}
		else if(kode [nomaha] == "MI"){
			jurusan  [nomaha] = "Manajemen Informatika";
			byrawl 	 [nomaha] = 1500000 ;
			jlhcclan [nomaha] = 6 ;
			bsrcclan [nomaha] = 250000;
		}
		
		
		cout<<"Jurusan                      :"<<jurusan[nomaha]<<endl;
		cout<<"Pembayaran Awal              :Rp"<<byrawl[nomaha]<<endl;
		cout<<"Jumlah Cicilan               :"<<jlhcclan[nomaha]<<endl;
		cout<<"Besar Cicilan                :Rp"<<bsrcclan[nomaha]<<endl;
		cout<<"Pembayaran Ke                :";
		cin >>byran[nomaha];
		
		
		ukuliah [nomaha]= byrawl [nomaha] + (jlhcclan [nomaha] * bsrcclan [nomaha]);
		terbayar [nomaha] = byrawl [nomaha] + (byran [nomaha] * bsrcclan [nomaha]);
		skuliah [nomaha] = ukuliah [nomaha] - terbayar [nomaha];
		
		ttlkuliah += skuliah [nomaha];
		
		
		cout<<"Uang Kuliah                  :Rp"<<ukuliah[nomaha]<<endl;
		cout<<"Uang Kuliah Terbayar                            :Rp"<<terbayar[nomaha]<<endl;
		cout<<"Sisa Uang Kuliah yang Harus Di Bayar            :Rp"<<skuliah[nomaha]<<endl;
		
					
		
		nomaha++;
		
		cout<< endl;
		
		cout<< "Masih Ingin Menghitung Uang Kuliah Mahasiswa? [Y/T] :" ;
		cin >>lagi;
		cout<<endl;
		
	} while (lagi == 'Y' || lagi == 'y');
	
	cout<<left;
	cout<<  setw(5) << "No"
         << setw(8) << "Nama"
         << setw(5) << "Kode"
         << setw(23) << "Jurusan"
         << setw(10) << "UKT"
         << setw(15) << "Awal Bayar"
         << setw(8) << "Cicilan"
         << setw(15) << "Besar Cicilan"
         << setw(12) << "Cicilan ke"
         << setw(10) << "Terbayar" 
		 << setw(20) << "Sisa Harus Di Bayar"<< endl;
		 
	cout<< "------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	
	for (int i = 0; i < nomaha; i++){
		cout<<  setw(5) << i + 1
         << setw(8) << nama[i]
         << setw(5) << kode[i]
         << setw(23) << jurusan[i]
         << setw(10) << ukuliah[i]
         << setw(15) << byrawl[i]
         << setw(8) << jlhcclan[i]
         << setw(15) << bsrcclan[i]
         << setw(12) << byran[i]
         << setw(10) << terbayar[i] 
		 << setw(20) << skuliah[i] << endl;
		
	}
	cout<<"Total Uang Kuliah Yang Harus Di Bayar Oleh Semua Mahasiswa Penusa                                             :Rp" <<ttlkuliah <<endl;
	return 0;
}
