/* Nama  : Alfin Oktavian
   NIM   : 240401010282
   Kelas : IF102
   Mata Kuliah : Algoritma dan Pemrograman
*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    char ulang;

    do {
        int jumlah;
        string nama[50];
        float tugas[50], uts[50], uas[50], akhir[50];
        char grade[50];

        cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
        cout << "MATERI PEMROGRAMMAN C++" << endl;
        cout << "Masukkan Jumlah Mahasiswa : ";
        cin >> jumlah;
        cin.ignore();

        // ===== LAYAR INPUT =====
        for (int i = 0; i < jumlah; i++) {
            cout << "\nMahasiswa Ke - " << i + 1 << endl;
            cout << "Nama Mahasiswa : ";
            getline(cin, nama[i]);

            cout << "Nilai Tugas : ";
            cin >> tugas[i];

            cout << "Nilai UTS : ";
            cin >> uts[i];

            cout << "Nilai UAS : ";
            cin >> uas[i];
            cin.ignore();

            // Hitung nilai akhir
            akhir[i] = (tugas[i] * 0.3) + (uts[i] * 0.3) + (uas[i] * 0.4);

            // Tentukan grade
            if (akhir[i] >= 80)
                grade[i] = 'A';
            else if (akhir[i] >= 70)
                grade[i] = 'B';
            else if (akhir[i] >= 59)
                grade[i] = 'C';
            else if (akhir[i] >= 50)
                grade[i] = 'D';
            else if (akhir[i] <= 50)
                grade[i] = 'E';
        }

        // ===== LAYAR OUTPUT =====
        cout << "\nDAFTAR NILAI" << endl;
        cout << "MATERI : PEMROGRAMMAN C++" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << left << setw(4) << "No"
             << setw(20) << "Nama"
             << setw(8) << "Tugas"
             << setw(8) << "UTS"
             << setw(8) << "UAS"
             << setw(8) << "Akhir"
             << setw(8) << "Grade" << endl;
        cout << "---------------------------------------------------------------" << endl;

        for (int i = 0; i < jumlah; i++) {
            cout << left << setw(4) << i + 1
                 << setw(20) << nama[i]
                 << setw(8) << tugas[i]
                 << setw(8) << uts[i]
                 << setw(8) << uas[i]
                 << setw(8) << fixed << setprecision(2) << akhir[i]
                 << setw(8) << grade[i] << endl;
        }

        cout << "---------------------------------------------------------------" << endl;
        cout << "\nIngin menjalankan program dari awal (y/n)? ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
