#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

void hitung();

float hitung (int s);//satu variabel yang mengandung 1 nilai /1 parametrik
int main()
{
	float volume,sisi;
	
	cout <<"\n Menghitung Volume Kubus";
	cout <<"\n Sisi Kubus :";
	cin >> sisi;
	volume = hitung (sisi);
	cout << "\n Volume Kubus Yaitu : "<<volume ;
}

float hitung (int s)
{
	return (s * s *s);
}
