#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Silakan pilih metode pembayaran berikut." << endl;
    cout << "1. E-Wallet" << endl;
    cout << "2. Bank Transfer" << endl;
    cout << "Metode pembayaran yang anda pilih: ";
    cin >> a;
    switch(a) {
        case 1:
            cout << "Pilih e-wallet yang digunakan." << endl;
            cout << "1. GoPay" << endl;
            cout << "2. ShopeePay" << endl;
            cout << "3. OVO" << endl;
            cout << "Metode pembayaran yang anda pilih: ";
            cin >> b;
            switch(b) {
                case 1:
                    cout << "Anda memilih pembayaran via GoPay dengan biaya tambahan sebesar Rp1.000" << endl;
                    break;
                case 2:
                    cout << "Anda memilih pembayaran via ShopeePay dengan biaya tambahan sebesar Rp1.000" << endl;
                    break;
                case 3:
                    cout << "Anda memilih pembayaran via OVO dengan biaya tambahan sebesar Rp1.000" << endl;
                    break;
                default:
                    cout << "Mohon maaf saat ini metode pembayaran yang ada pilih belum tersedia." << endl;
                    break;
            }
            break;
        case 2:
            cout << "Pilih e-wallet yang digunakan." << endl;
            cout << "1. Setor tunai" << endl;
            cout << "2. Transfer ATM" << endl;
            cout << "3. Mobile banking" << endl;
            cout << "Metode pembayaran yang anda pilih: ";
            cin >> c;
            switch (c) {
                case 1:
                    cout << "Anda memilih pembayaran setor tunai via teller dengan biaya tambahan sebesar Rp1.500" << endl;
                    break;
                case 2:
                    cout << "Anda memilih pembayaran via transfer ATM dengan biaya tambahan sebesar Rp1.500" << endl;
                    break;
                case 3:
                    cout << "Biaya tambahan: Rp1.500. Silakan masukkan kode virtual account berikut ketika melakukan pembayaran: 8xxxxxxxxx0." << endl;
                    break;
                default:
                    cout << "Mohon maaf saat ini metode pembayaran yang ada pilih belum tersedia." << endl;
                    break;
            }
            break;
        default:
            cout << "Mohon maaf saat ini metode pembayaran yang ada pilih belum tersedia." << endl;
            break;
    }
    return 0;
}
