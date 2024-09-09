#include <iomanip>
#include<iostream>

using namespace std;

int main()
{
	int bil;
	
	cout<<"Ketika Angka Dari [0..9] = ";
	cin>>bil;
	switch(bil){
		case 0:
				cout<<"Anda Mengetikan Angka 0";
				break;
		case 1:
				cout<<"Anda Mengetikan Angka 1";
				break;
		default:
				cout<<"Anda Mengetikan Yang Salah";
						
	}
	return 0;
}

