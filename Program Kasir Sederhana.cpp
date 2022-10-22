#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
int kode,jum_beli,harga1,harga2,harga3,harga4,harga5,harga6,harga7,harga8,harga9,total1,total2,total3,total4,total5,total6,total7,total8,total9,jumlh1,jumlh2,jumlh3,jumlh4,jumlh5,jumlh6,jumlh7,jumlh8,jumlh9,total;
int jmlbyr,kembalian;
char lagi;

awal : 
system("cls");
cout <<"======================================"<< endl;
cout <<"=             Warung Neng            ="<< endl;
cout <<"======================================"<< endl;
cout <<"1. Signature        Rp. 20.000,-"<< endl;
cout <<"2. Seblak Komplit   Rp. 12.000,-"<< endl;
cout <<"3. Seblak Biasa     Rp.  8.000,-"<< endl;
cout <<"4. Mie Goreng       Rp.  9.000,-"<< endl;
cout <<"5. Mie Rebus        Rp.  9.000,-"<< endl;
cout <<"6. Es 1K            Rp.  1.000,-"<< endl;
cout <<"7. Es Nutrisari     Rp.  2.500,-"<< endl;
cout <<"8. Es Good Day      Rp.  3.000,-"<< endl;
cout <<"9. Kopi             Rp.  3.500,-"<< endl;
cout <<"======================================"<< endl << endl;

cout<<"Masukan Jumlah Pembelian : "; cin>>jum_beli;
cout<<endl;
    
for (int i=0; i<jum_beli;i++){
    cout<<endl;
    cout<<"Masukan Pilihan Anda(1-9) : "; cin>>kode;
    cout<<endl;

    switch(kode)
    {

    case 1 :
        
        cout<<"Signature"<<endl;
        harga1=20000;
        cout<<"Masukan Jumlah Dibeli : ";
        cin>>jumlh1;
        
        total1 = jumlh1*harga1;
        cout<<"Total harga : " <<total1<<endl;
        
        cout<<endl;
        break;
       
    case 2 :
        
        cout<<"Seblak Komplit"<<endl;
        harga2=12000;
        cout<<"Masukkan Jumlah Dibeli : ";
        cin>>jumlh2;
        
        total2 = jumlh2*harga2;
        cout<<"Total harga : " <<total2<<endl;
        
        cout<<endl;
        break;
        
    case 3 :
       
        cout<<"Seblak Biasa"<<endl;
        harga3=8000;
        cout<<"Masukkan Jumlah Dibeli : ";
        cin>>jumlh3;
        
        total3 = jumlh3*harga3;
        cout<<"Total harga : " <<total3<<endl;
        cout<<endl;
         
        break;

    case 4 :

        cout<<"Mie Goreng"<<endl;
        harga4=9000;
        cout<<"Masukan Jumlah Dibeli : ";
        cin>>jumlh4;

        total4 = jumlh4*harga4;
        cout<<"Total harga : " <<total4<<endl;
        cout<<endl;

        break;

    case 5 :

        cout<<"Mie Rebus"<<endl;
        harga5=9000;
        cout<<"Masukan Jumlah Dibeli : ";
        cin>>jumlh5;

        total5 = jumlh5*harga5;
        cout<<"Total harga : " <<total5<<endl;
        cout<<endl;

        break;

    case 6 :

        cout<<"Es 1K"<<endl;
        harga6=1000;
        cout<<"Masukan Jumlah Dibeli : ";
        cin>>jumlh6;

        total6 = jumlh6*harga6;
        cout<<"Total harga : " <<total6<<endl;
        cout<<endl;

        break;

    case 7 :

        cout<<"Es Nutrisari"<<endl;
        harga7=2500;
        cout<<"Masukan Jumlah Dibeli : ";
        cin>>jumlh7;

        total7 = jumlh7*harga7;
        cout<<"Total harga : " <<total7<<endl;
        cout<<endl;

        break;

    case 8:

        cout<<"Es Good Day"<<endl;
        harga8=3000;
        cout<<"Masukan Jumlah Dibeli : ";
        cin>>jumlh8;

        total8 = jumlh8*harga8;
        cout<<"Total harga : " <<total8<<endl;
        cout<<endl;

        break;

    case 9:

        cout<<"Kopi"<<endl;
        harga9=3500;
        cout<<"Masukan Jumlah Dibeli : ";
        cin>>jumlh9;

        total9 = jumlh9*harga9;
        cout<<"Total harga : " <<total9<<endl;
        cout<<endl;

        break;

    }
    

}
    
total = total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9;
cout<<endl;
cout << "Total Pembelian anda : "<<total<<endl;

        cout<<"Masukan jumlah pembayaran : ";
        cin>>jmlbyr;
        cout<<endl;
        kembalian = jmlbyr - total;
        cout << "Kembalian anda : " <<kembalian<<endl;

    
cout<<"Anda Ingin Mengulangi Lagi (Y?N)";
    cin>>lagi;
        if(lagi=='y' || lagi=='Y'){
            goto awal;
        }
        if (lagi=='N' || lagi=='n'){
            goto selesai;
        }
selesai:
    system("cls");
    cout<<"Terima Kasih"<<endl;
    cout<<"Program created by : WalnutPG"<<endl;

return 0;
}
