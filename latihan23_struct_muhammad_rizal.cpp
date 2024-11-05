#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct data_mahasiswa{
	
	char npm[9]; //npm ,nama,,nilai di sini adalah variabel
	char nama[20];
	int nilai;
};
int main ()
{
	data_mahasiswa data_mhs;
	
	cout <<"input data mahasiswa\n";
	cout <<"------------------------\n";
	cout <<"Npm: ";
	cin >> data_mhs.npm; //npm,nama,nilai adalah
	cout <<"Nama : ";
	cin >>data_mhs.nama;
	cout <<"Nilai : ";
	cin >>data_mhs.nilai;
	cout <<"-------------------------\n";
	cout <<"Data yang telah di input\n";
	cout <<"-------------------------\n";
	cout <<"NPM :"<< data_mhs.npm<< endl;
	cout <<"Nama :"<< data_mhs.nama<<endl;
	cout <<"Nilai :"<< data_mhs.nilai<<endl;
	cout <<"--------------------------\n";
	return 0;
}
