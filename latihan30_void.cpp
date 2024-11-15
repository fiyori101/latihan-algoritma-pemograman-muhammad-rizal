#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

void hitung(); //mendeklerasikan (prototype) fungsi yang tidak menghasilkan nilai

int main() 
{
	cout <<"\n menghitung Volume Kubus";
	hitung();//memanggil fungsi hitung
	return 0;
}

void hitung ()
{
	float sisi,volume;
	cout <<"\n Sisi Kubus : ";
	cin >>sisi ;
	volume = sisi * sisi* sisi;
	cout << "\n Volume Kubus Yaitu : "<< volume ;
}
