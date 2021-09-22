#include <iostream>

using namespace std;

int main() {
    int angka;

    cin >> angka;
    cout << "Angka yang diinputkan: " << angka << endl << endl;

    cout << angka << " + " << angka << " = " << angka + angka << endl; // nilai angka ditambah dengan nilai angka
    cout << angka << " - 10 = " << angka - 10 << endl; // nilai angka dikurangi 10
    cout << angka << " x 2 = " << angka * 2 << endl; // nilai angka dikali 2
    cout << angka << " / 3 = " << angka / 3 << endl; // angka dibagi 3
    cout << angka << " mod 2 = " << angka % 2 << endl; // nilai angka modulus 2
    cout << (9 + angka * 11) % 3 << endl << endl; // contoh penggunaan beberapa operator sekaligus

    angka = 5; // mengganti nilai variabel angka
    cout << angka++ << endl; // nilai "angka" akan ditambah 1 di baris perintah selanjutnya
    cout << ++angka << endl << endl; /* angka yang nilainya sudah ditambah 1 karena perintah baris sebelumnya,
    ditambah lagi secara langsung, sehingga pada baris ini terlihat bahwa angka awal sudah ditambah dua kali */

    angka = 7;
    cout << angka-- << endl;
    angka = 7;
    cout << --angka << endl;

    return 0;
}
