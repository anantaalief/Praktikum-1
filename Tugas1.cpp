// Menghitung lama pemakaian dalam (jam, menit, detik)
// Menhitung total harga yang harus di bayar user

#include <iostream>
using namespace std;

int main(){
	int jam, menit, detik;
	int totalHarga;
	
	cout << "Masukkan Beberapa jam anda telah bermain game :";
	cin>>jam;
	
	menit = jam * 60;
	detik = menit * 60; 
	totalHarga = jam * 5000; //Menghitung total harga
	
	cout << "Anda telah bermain game selama "<< jam <<" jam "
	<< menit<<" menit "<<detik<<" detik"<<endl;
	
	cout<<"Total Harga yang harus dibayar = "<<totalHarga<<" Rp";
	  
	
	cin.get();
	return 0;
	}
