/* Nama  : Alfin Oktavian
   NIM   : 240401010282
   Kelas : IF102
   Mata Kuliah : Algoritma dan Pemrograman
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function menentukan tarif
int tarif(char kode) {
    if (kode == 'C' || kode == 'c')
        return 500;
    else if (kode == 'K' || kode == 'k')
        return 700;
    else if (kode == 'N' || kode == 'n')
        return 1000;
    else
        return 0;
}

// Function menentukan jenis buku
string jenisBuku(char kode) {
    if (kode == 'C' || kode == 'c')
        return "CerPen (Kumpulan Cerita Pendek)";
    else if (kode == 'K' || kode == 'k')
        return "Komik";
    else if (kode == 'N' || kode == 'n')
        return "Novel";
    else
        return "Tidak Diketahui";
}

int main() {
    string nama;
    char kode, ulang;
    int jumlah, harga, total;

    do {
        cout << "\nPerpustakaan \"Kecil-Kecilan\"\n";
        cout << "-----------------------------------------\n";
        cout << "Nama Penyewa Buku : ";
        getline(cin, nama);

        cout << "Kode Buku [C/K/N] : ";
        cin >> kode;

        cout << "Banyak Pinjam : ";
        cin >> jumlah;

        harga = tarif(kode);
        total = harga * jumlah;

        // Pastikan output tidak scientific
        cout << fixed << setprecision(0);

        cout << "\nTarif Sewa Rp. " << harga << endl;
        cout << "Jenis Buku : " << jenisBuku(kode) << endl;
        cout << "Penyewa dengan Nama " << nama << endl;
        cout << "Jumlah Bayar Penyewaan Sebesar Rp. " << total << endl;

        cout << "\nIngin menjalankan program dari awal (y/n)? ";
        cin >> ulang;
        cin.ignore();

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
