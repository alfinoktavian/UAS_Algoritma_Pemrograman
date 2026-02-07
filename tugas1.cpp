/* Nama  : Alfin Oktavian
   NIM   : 240401010282
   Kelas : IF102
   Mata Kuliah : Algoritma dan Pemrograman
*/

#include <iostream>
#include <iomanip>
using namespace std;

double potong(double pembelian) {
    if (pembelian < 1000000)
        return 0;
    else if (pembelian <= 5000000)
        return pembelian * 0.20;
    else
        return pembelian * 0.35;
}

int main() {
    char ulang;
    double pembelian, diskon, bayar;

    do {
        cout << "\nPROGRAM HITUNG POTONGAN\n";
        cout << "Besar pembelian barang Rp. : ";
        cin >> pembelian;

        diskon = potong(pembelian);
        bayar  = pembelian - diskon;

        cout.unsetf(ios::scientific);
        cout.unsetf(ios::fixed);
        cout << fixed << setprecision(0);

        cout << "Besar diskon yang diberikan Rp. " << diskon << endl;
        cout << "Besar harga yang harus dibayarkan Rp. " << bayar << endl;

        cout << "\nIngin menjalankan program dari awal (y/n)? ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
