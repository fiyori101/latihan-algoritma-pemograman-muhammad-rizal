#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct mahasiswa {
    int npm;
    double mid, smester;
    char nama[20];
    double akhir;
    char huruf;
} maha[100];

int main() {
    char lg = 'Y';
    int n = 0;
    cout << setprecision(15);

    while (lg == 'y' || lg == 'Y') {
        system("cls");
        cout << "Data Nilai Ujian Pemrograman C++\n";
        cout << "Dosen           : Budiman, S.Si\n";
        cout << "-------------------------------------\n";
        n++;
        
        cout << "Npm             : ";
        cin >> maha[n].npm;
        cout << "Nama            : ";
        cin >>maha[n].nama, 20;
        cout << "Nilai Mid       : ";
        cin >> maha[n].mid;
        cout << "Nilai Semester  : ";
        cin >> maha[n].smester;

        maha[n].akhir = (0.40 * maha[n].mid) + (0.60 * maha[n].smester);

        if (maha[n].akhir >= 80) {
            maha[n].huruf = 'A';
        } else if (maha[n].akhir >= 70) {
            maha[n].huruf = 'B';
        } else if (maha[n].akhir >= 55) {
            maha[n].huruf = 'C';
        } else if (maha[n].akhir >= 40) {
            maha[n].huruf = 'D';
        } else {
            maha[n].huruf = 'E';
        }

        cout << "Nilai Akhir     : " << maha[n].akhir << endl;
        cout << "Nilai Huruf     : " << maha[n].huruf << endl;

        cout << "-----------------------------------------\n";
        cout << "Ingin Input Lagi [Y/T] : ";
        lg = getch();
    }

    system("cls");
    cout << "==============================================================================\n";
    cout << "                       LAPORAN NILAI UJIAN PROGRAM C++                        \n";
    cout << "------------------------------------------------------------------------------\n";
    cout << "NPM          NAMA          NILAI MID    NILAI SEMESTER   NILAI AKHIR   FINAL  \n";
    cout << "------------------------------------------------------------------------------\n";

    for (int i = 1; i <= n; i++) {
        gotoxy(1, i + 5); cout << maha[i].npm;
        gotoxy(10, i + 5); cout << maha[i].nama;
        gotoxy(30, i + 5); cout << maha[i].mid;
        gotoxy(46, i + 5); cout << maha[i].smester;
        gotoxy(60, i + 5); cout << maha[i].akhir;
        gotoxy(73, i + 5); cout << maha[i].huruf;
        cout << endl;
    }

    cout << "==============================================================================\n";
    return 0;
}

