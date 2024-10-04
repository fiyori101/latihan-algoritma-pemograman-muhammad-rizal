#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int matriksa[2][2], matriksb[2][2],hasil [2][2];
	
	//input untuk matriks a
	cout<< "masukkan elemen matriks A (2x2): "<<endl;
	for (int i= 0; i < 2 ; i++) {
		for (int j= 0; j<2 ; j++){
			cout<< "A["<<i<<"]["<<j<< "]:";
			cin>> matriksa [i][j];
		}
	}
	//input untuk matriks b
	cout <<" masukkan elemen matriks B (2x2):"<<endl;
	for (int i= 0;i <2; i++){
		for (int j= 0;j<2;j++){
			cout <<"B["<<i<<"]["<<j<<"]: ";
			cin>> matriksb[i][j];
		}
	}
	//menjumlahkan kedua matriks
	for (int i=0; i<2; i++){
		for(int j= 0; j<2;j++){
			hasil[i][j]= matriksa[i][j]+ matriksb[i][j];
		}
	}
	//menampilkan hasil penjumlahan
	cout<<"hasil penjumlahan matriks a dan matriks b adalah: "<<endl;
	for (int i=0 ; i <2; i++){
		for (int j= 0; j<2;j++){
			cout<< hasil[i][j]<< " ";
		}
	}cout<< endl;
	return 0;
	
}
