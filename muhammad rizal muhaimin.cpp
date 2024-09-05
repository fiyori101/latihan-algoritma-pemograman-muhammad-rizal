#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{float harga,jlhjual,ttlhrga,diskon,ttlbyr;
char nama[20];

cout<< "PENJUALAN BARANG ELEKTRONIK"<<endl;
cout<<"nama barang: ";
cin>>nama;
cout<<"harga : ";
cin>>harga;
cout<<"jumlah jual : ";
cin>>jlhjual;

cout<<setprecision(13);
ttlhrga =harga*jlhjual;
cout<<"total harga : "<<ttlhrga<<endl;

diskon=ttlhrga*0.10;
cout<<"diskon : "<<diskon<<endl;

ttlbyr=ttlhrga-diskon;
cout<<"total harga : "<<ttlbyr<<endl;

return 0;

}
