#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    int kode, jum_beli, harga1, harga2, harga3, harga4, harga5, total1, total2, total3, total4, total5, jumlh1, jumlh2, jumlh3, jumlh4, jumlh5, total;
    int dis, hasildis, jmlbyr, kembalian;
    char lagi;

awal:
    cout << "Kedai Kopi CBA" << endl;
    cout << "1. Kopi Susu        : Rp, 7.500" << endl;
    cout << "2. Kopi Hitam       : Rp, 5.000" << endl;
    cout << "3. Cappucino        : Rp,13.000" << endl;
    cout << "4. Kopi Luwak       : Rp,15.000" << endl;
    cout << "5. Caffe Latte      : Rp,13.000" << endl;
    cout << endl;

    cout << "Masukkan Pilihan Anda (1-5) : ";
    cin >> kode;
    cout << endl;

    switch (kode)
    {

    case 1:

        cout << "Kopi Susu" << endl;
        harga1 = 7500;
        cout << "Masukkan Jumlah : ";
        cin >> jumlh1;

        total1 = jumlh1 * harga1;
        cout << "Total harga : " << total1;

        cout << endl;
        break;

    case 2:

        cout << "Kopi Hitam" << endl;
        harga2 = 5000;
        cout << "Masukkan Jumlah : ";
        cin >> jumlh2;

        total2 = jumlh2 * harga2;
        cout << "Total harga : " << total2 << endl;

        cout << endl;
        break;

    case 3:

        cout << "Cappucino" << endl;
        harga3 = 13000;
        cout << "Masukkan Jumlah : ";
        cin >> jumlh3;

        total3 = jumlh3 * harga3;
        cout << "Total harga : " << total3 << endl;
        cout << endl;

        break;

    case 4:

        cout << "Kopi Luwak" << endl;
        harga4 = 15000;
        cout << "Masukan Jumlah : ";
        cin >> jumlh4;

        total4 = jumlh4 * harga4;
        cout << "Total Harga : " << total4 << endl;
        cout << endl;

        break;

    case 5:

        cout << "Caffe Latte" << endl;
        harga5 = 13000;
        cout << "Masukan Jumlah : ";
        cin >> jumlh5;

        total5 = jumlh5 * harga5;
        cout << "Total Harga : " << total5 << endl;
        cout << endl;

        break;
    }

    total = total1 + total2 + total3 + total4 + total5;
    cout << endl;
    cout << "Sub Total Pembelian       : " << total << endl;

    if (total >= 40000)
    {
        dis = 0.1 * total;
        hasildis = total - dis;
        cout << "Selamat Anda Mendapatkan Diskon 10%" << endl;
        cout << "Total Setelah Diskon      : " << hasildis << endl;
        cout << "Masukan jumlah pembayaran : ";
        cin >> jmlbyr;
        cout << endl;
        kembalian = jmlbyr - hasildis;
        cout << "Kembalian anda            : " << kembalian << endl;
    }
    else if (total > 20000 && total < 40000)
    {
        dis = 0.05 * total;
        hasildis = total - dis;
        cout << "Selamat Anda Mendapatkan Diskon 5%" << endl;
        cout << "Total Setelah Diskon      : " << hasildis << endl;
        cout << "Masukan jumlah pembayaran : ";
        cin >> jmlbyr;
        kembalian = jmlbyr - hasildis;
        cout << "Kembalian anda            : " << kembalian << endl;
    }
    else
    {
        cout << "Masukan jumlah pembayaran : ";
        cin >> jmlbyr;
        kembalian = jmlbyr - total;
        cout << "Kembalian anda            : " << kembalian << endl;
    }

    cout << endl;
    cout << "Anda Ingin Mengulangi Lagi (Y/N) : ";
    cin >> lagi;
    if (lagi == 'y' || lagi == 'Y')
    {
        goto awal;
    }
    if (lagi == 'N' || lagi == 'n')
    {
        goto selesai;
    }

selesai:

    cout << endl;
    cout << "<><><><><><><><><><><><><><><><><><><><><><>" << endl;
    cout << "<>                                        <>" << endl;
    cout << "<>              Terima Kasih              <>" << endl;
    cout << "<>  Program Created By : Pimeng/W4LNUTP6  <>" << endl;
    cout << "<>      https://github.com/WallnutPG      <>" << endl;
    cout << "<>                                        <>" << endl;
    cout << "<><><><><><><><><><><><><><><><><><><><><><>" << endl;

    return 0;
}
