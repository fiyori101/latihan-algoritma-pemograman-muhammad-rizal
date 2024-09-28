#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char nampeg[30];
    long double penjualan;
    long double komisi;
    long double ttlkomisi = 0;  //long double untuk angka atau nominal besar
    
    cout << "PT MURAH HATI" << endl;
    cout << "HASIL PENJUALAN PEGAWAI DAN BONUS KOMISINYA " << endl;
    cout << "-----------___________------------" << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << "Nama Pegawai " << i + 1 << ": ";
        cin >> nampeg;
        cout << "Jumlah Penjualan Pegawai : ";
        cin >> penjualan;
        

        if (penjualan < 500000) {
            komisi = 0;
        } else if (penjualan >= 500000 && penjualan < 500001) {
            komisi = penjualan * 0.10;
        } else {
            komisi = (500000 * 0.10) + (penjualan - 500000) * 0.15;
        }
        
        cout << setprecision(13);
        cout << "Bonus Komisi Pegawai " << i + 1 << ": " << komisi << endl;
        
        ttlkomisi += komisi; 
    }
    
    cout << "Total komisi yang harus dibayar perusahaan: " << ttlkomisi << endl;
    return 0;
}

	
