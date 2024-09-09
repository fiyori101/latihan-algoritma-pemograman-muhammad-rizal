#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float gperjam=500,jlhjamkrja,lembur,ttlgaji;
	char nmapeg [30];
	
	cout<< "PERHITUNGAN GAJI PEGAWAI HARIAN TOKO SINARMAS"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"nama pegawai : ";
	gets(nmapeg);
	cout<<"jumlah jam kerja : ";
	cin>>jlhjamkrja;
	if(jlhjamkrja>7){
		lembur=(1.5*gperjam*(jlhjamkrja-7));
		ttlgaji=(7*gperjam)+lembur;
	}else {
		lembur=0;
		ttlgaji=(jlhjamkrja*gperjam)+lembur;
			}
	cout<<"Total Gaji Pegawai Harian Toko SINARMAS = "<<ttlgaji<<endl;
	
	return 0;
}
