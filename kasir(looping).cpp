#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int pilih, jumlahBeli[30], diskon, jumlah, harga[50], j;
long int subTotal[30], jumlahHarga = 0, bayar, kembalian;
char kodeMinuman[30];
string namaBarang[50];
float total;

void menu() {

        cout << "MENU PESANAN\n\n"; 

        cout << "A. Kopi Susu\n";
        cout << "B. Kopi Hitam\n";
        cout << "C. Cappucino\n"; 
        cout << "D. Kopi Luwak\n";
        cout << "E. Caffe Latte\n";  
}

int main()
{
        ulang:
        menu();

                cout << "Jumlah Minuman : ";
                cin >> j; 

        for (int i = 1; i <= j; i++)
        {
                cout << endl;
                cout << "Minuman Ke-" << i << "\n";
                cout << "Pilih Minuman  : "; 
                cin >> kodeMinuman[i];
                cout << "Jumlah Minuman : ";
                cin >> jumlahBeli[i]; 
        }

        for (int i = 1; i <= j; i++)
        {
                if (kodeMinuman[i] == 'A' || kodeMinuman[i] == 'a')
                {
                        namaBarang[i] = "Kopi Susu";
                        harga[i] = 7500;
                } 
                else if (kodeMinuman[i] == 'B' || kodeMinuman[i] == 'b')
                {
                        namaBarang[i] = "Kopi Hitam";
                        harga[i] = 5000;
                } 
                else if (kodeMinuman[i] == 'C' || kodeMinuman[i] == 'c')
                {
                        namaBarang[i] = "Cappucino";
                        harga[i] = 13000;
                }
                else if (kodeMinuman[i] == 'D' || kodeMinuman[i] == 'd')
                {
                        namaBarang[i] = "Kopi Luwak";
                        harga[i] = 15000;
                }
                else if (kodeMinuman[i] == 'E' || kodeMinuman[i] == 'e')
                {
                        namaBarang[i] = "Caffe Latte";
                        harga[i] = 13000;
                }
        }
        
        system("clear");
        cout << "--------------------------------------------" << endl; 
        cout << "|   Nama Minuman    |  Jumlah  |   Harga   |" << endl;
        cout << "--------------------------------------------" << endl;

        for (int i = 1; i <= j; i++)
        {
                subTotal[i] = jumlahBeli[i] *  harga[i];
                cout << "    " << namaBarang[i] << "\t     " << setiosflags(ios::right) << setw(5) << jumlahBeli[i] << "    " << setiosflags(ios::right) << setw(7) << "Rp. " << subTotal[i] << endl;
                cout << "--------------------------------------------" << endl;
                jumlahHarga = jumlahHarga + subTotal[i];
        }

        if (jumlahHarga >= 40000)
        {
                cout << "   Jumlah Harga :                Rp. " << jumlahHarga << endl;
                cout << "--------------------------------------------";
                cout<<endl;
                cout << endl;
                cout<<"Selamat Anda Mendapatkan Diskon 10%"<<endl;
                diskon =  0.1 * jumlahHarga;
                total = jumlahHarga - diskon;
                cout << "Total Pembelian : " << total;
        } else if (jumlahHarga > 20000 && jumlahHarga < 40000)
        {
                cout << "   Jumlah Harga :                Rp. " << jumlahHarga << endl;
                cout << "--------------------------------------------";
                cout<<endl;
                cout << endl;
                cout<<"Selamat Anda Mendapatkan Diskon 5%"<<endl;
                diskon =  0.05 * jumlahHarga;
                total = jumlahHarga - diskon;
                cout << "Total Pembelian : " << total;
        }
        else {
                cout << "   Jumlah Harga :                Rp. " << jumlahHarga << endl;
                cout << "--------------------------------------------" << endl;
                total = jumlahHarga;
                cout << "Total Pembelian : " << total;
        }
        cout << endl;
        cout << "Uang Pembayaran : ";
        cin >> bayar;
        kembalian = bayar - total;
        cout << "Kembalian Anda  : " << kembalian;
        cout << endl;
        cout << endl;
        cout << "Program Created By : WallnutPG" << endl;
        cout << "Repositories       : https://github.com/WallnutPG" << endl;
        cout << "THANKYU" << endl;
}
