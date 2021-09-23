#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Silakan pilih metode pembayaran berikut." << endl;
    cout << "1. GoPay" << endl;
    cout << "2. ShopeePay" << endl;
    cout << "3. OVO" << endl;
    cout << "4. Link Aja" << endl;
    cout << "5. QRIS" << endl;
    cout << "Metode pembayaran yang anda pilih: ";
    cin >> a;
    switch(a) {
        case 1:
            cout << "Anda memilih pembayaran via GoPay dengan biaya tambahan sebesar Rp1.000" << endl;
            break;
        case 2:
            cout << "Anda memilih pembayaran via ShopeePay dengan biaya tambahan sebesar Rp1.000" << endl;
            break;
        case 3:
            cout << "Anda memilih pembayaran via OVO dengan biaya tambahan sebesar Rp2.000" << endl;
            break;
        case 4:
            cout << "Anda memilih pembayaran via Link Aja dengan biaya tambahan sebesar Rp1.500" << endl;
            break;
        case 5:
            cout << "Anda memilih pembayaran via QRIS dengan biaya tambahan sebesar Rp0" << endl;
            break;
        default:
            cout << "Mohon maaf saat ini metode pembayaran yang ada pilih belum tersedia." << endl;
            break;
    }
    return 0;
}
