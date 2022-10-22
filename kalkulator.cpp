#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

	int tambah ( float a, float b){
		return ( a + b);
	}
	int kurang ( float a, float b){
		return ( a - b );
	}
	int kali ( float a, float b ){
		return ( a * b );
	}
	int bagi ( float a, float b ){
		return ( a / b );
	}

		int main(){
			int bil1, bil2;
			char pilihan, lagi;

		awal :

			cout << "Program Kalkulator" << endl;
			cout << endl;
			cout << "Pilihan" << endl;
			cout << "(A) Pertambahan" << endl;
			cout << "(B) Pengurangan" << endl;
			cout << "(C) Perkalian" << endl;
			cout << "(D) Pembagian" << endl;
			cout << "Masukan Pilihan : "; cin >> pilihan;
			cout << endl;

		if ( pilihan == 'A' || pilihan == 'a' ){
			cout << ""; cin >> bil1; cout << ""; cin >> bil2;
			cout << "= " << tambah(bil1,bil2) << endl;
		}

		else if ( pilihan == 'B' || pilihan == 'b' ){
			cout << ""; cin >> bil1; cout << ""; cin >> bil2;
			cout << "= " << kurang(bil1,bil2) << endl;
		}

		else if ( pilihan == 'C' || pilihan == 'c' ){
			cout << ""; cin >> bil1; cout << ""; cin >> bil2;
			cout << "= " << kali(bil1,bil2) << endl;
		}

		else if ( pilihan == 'D' || pilihan == 'd' ){
			cout << ""; cin >> bil1; cout << ""; cin >> bil2;
			cout << "= " << bagi(bil1,bil2) << endl;
		}

			cout << endl;
			cout << "Ulangi Lagi? (Y/N) : ";
			cin >> lagi;
				if ( lagi == 'Y' || lagi == 'y' ){
				goto awal;
				}
				if ( lagi == 'N' || lagi == 'n' ){
				goto selesai;
				}

		selesai :

			cout << "Sip Tenkyuhh" << endl;

	return 0;
		
}
