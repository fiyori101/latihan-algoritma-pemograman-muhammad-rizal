#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    const int maxpeg = 50;
    string nama[maxpeg], golongan[maxpeg], kode[maxpeg], jabatan[maxpeg];
    float gaji[maxpeg], tunjngn[maxpeg], pinjman[maxpeg], pajak[maxpeg], gjikotr[maxpeg], gjibrsih[maxpeg];
    char lagi;
    int nopegwai = 0;
    float total_biaya = 0;  
    
    cout << "GAJI PEGAWAI PT. TELKOM" << endl;
    cout << "-----------------------" << endl;

    do {
      
        cout << "Pegawai ke-" << nopegwai + 1 << endl;
        cout << "Nama Pegawai              : ";
        cin >> nama[nopegwai];
        cout << "Golongan                  : ";
        cin >> golongan[nopegwai];
        cout << "Kode Jabatan              : ";
        cin >> kode[nopegwai];

        
        if (golongan[nopegwai] == "Ia") {
            gaji[nopegwai] = 500000;
        } else if (golongan[nopegwai] == "IIa") {
            gaji[nopegwai] = 750000;
        } else if (golongan[nopegwai] == "IIIa") {
            gaji[nopegwai] = 1000000;
        } else if (golongan[nopegwai] == "Ib") {
            gaji[nopegwai] = 1500000;
        } else if (golongan[nopegwai] == "IIb") {
            gaji[nopegwai] = 1750000;
        } else if (golongan[nopegwai] == "IIIb") {
            gaji[nopegwai] = 2500000;
        }

        
        if (kode[nopegwai] == "Dir") {
            jabatan[nopegwai] = "Direktur";
            tunjngn[nopegwai] = 450000;
        } else if (kode[nopegwai] == "Sek") {
            jabatan[nopegwai] = "Sekretaris";
            tunjngn[nopegwai] = 300000;
        } else if (kode[nopegwai] == "Wak") {
            jabatan[nopegwai] = "Wakil Direktur";
            tunjngn[nopegwai] = 375000;
        } else if (kode[nopegwai] == "Stf") {
            jabatan[nopegwai] = "Staf Administrasi";
            tunjngn[nopegwai] = 200000;
        }

        
        cout << "Pinjaman                  : ";
        cin >> pinjman[nopegwai];

        
        pajak[nopegwai] = gaji[nopegwai] * 0.05;
        gjikotr[nopegwai] = gaji[nopegwai] + tunjngn[nopegwai];
        gjibrsih[nopegwai] = gjikotr[nopegwai] - pinjman[nopegwai] - pajak[nopegwai];

        
        total_biaya += gjibrsih[nopegwai];

        nopegwai++;

       
        cout << "Masih ingin lanjut menghitung gaji? [Y/T]: ";
        cin >> lagi;
        cout << endl;

    } while (lagi == 'Y' || lagi == 'y');

   
    cout << left;
    cout << setw(5) << "No"
         << setw(15) << "Nama"
         << setw(10) << "Golongan"
         << setw(15) << "Jabatan"
         << setw(15) << "Gaji"
         << setw(15) << "Tunjangan"
         << setw(15) << "Pinjaman"
         << setw(15) << "Pajak"
         << setw(15) << "Gaji Kotor"
         << setw(15) << "Gaji Bersih" << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < nopegwai; i++) {
        cout << setw(5) << i + 1
             << setw(15) << nama[i]
             << setw(10) << golongan[i]
             << setw(15) << jabatan[i]
             << setw(15) << gaji[i]
             << setw(15) << tunjngn[i]
             << setw(15) << pinjman[i]
             << setw(15) << pajak[i]
             << setw(15) << gjikotr[i]
             << setw(15) << gjibrsih[i] << endl;
    }

    
    cout << endl;
    cout << "Total biaya yang dibayar perusahaan ke semua pegawai:                                                               Rp " << total_biaya << endl;

    cout << endl;
    

    return 0;
}

