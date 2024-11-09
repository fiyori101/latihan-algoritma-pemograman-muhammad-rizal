#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	string str1 = "STMIK";
	string str2 = "PENUSA";
	
	//Concetenation = menggabungkan kata
	string result =str1 + " " +str2;
	cout<< "concatenated: "<< result <<std ::endl; //std sebenarnya tidak di perlukan di karenakan sudah ada di namespace std;
	
	//length
	size_t length = result.length();
	cout << "length : "<< length << std::endl;
	
	//substring : mengambil karakter yang diinginkan
	string sub = result.substr (6, 6);
	cout << "Substring: "<< sub <<std ::endl;
	
	//find
	size_t pos =result.find("PENUSA");
	cout << "Position of 'PENUSA' : "<< pos << std ::endl;
	
	//rrplace 
	result.replace(0, 5, "HI");
	cout << "Replaced : "<<result << std::endl;
	
	return 0;
}
