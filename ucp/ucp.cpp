#include <iostream>
using namespace std;

int main()
{
	float namakota, tanggerang, bekasi, rerata;
	string status;

	cout << " memasukan namakota";
	cin >> namakota; 
	cout << " memasukkan tanggerang";
	cin >> tanggerang;
	cout << "memasukan bekasi";
	cin >> bekasi;
	

	rerata = ( tanggerang = bekasi) / 2;

	if (bekasi >= 45) {
		status = "sehat";
	}

    else if (tanggerang >= 75) {
		status = "tidak sehat";
	}
	else
	{
		status = "sehat";
	}

	cout << "total lokasi dinyatakan sehat = " << status << endl;


}

	


















// 1. variable float
//	  variable int
//	  variable char
// 2. if-Else statement
// 3. c++
// 4. Prosedur adalah blok kode yang menjalankan serangkaian pernyataan tanpa mengembalikan nilai.
//    contohnya int main
//	  Fungsi adalah blok kode yang menjalankan serangkaian pernyataan dan mengembalikan nilai ke pemanggil.
//    contohnya int add
// 5. While loop digunakan untuk menjalankan blok kode selama kondisi tertentu terpenuhi.