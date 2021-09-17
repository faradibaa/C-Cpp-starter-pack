#include <iostream>

using namespace std;

/* Berikut contoh input output serta variabel yang umum digunakan dalam C++ */

int main() {
    int integer; // bilangan bulat
    float pecahan; // bilangan pecahan atau desimal
    char karakter; // satu buah karakter
    string kata; // kumpulan char
    bool ya_tidak; // nilainya hanya true dan false
    const int bil_tetap = 10; // bernilai konstan dan tidak bisa diubah. Selain untuk int

    cin >> integer;
    cin >> pecahan >> karakter; // bisa langsung dalam satu baris seperti ini
    cin >> kata;
    cin >> ya_tidak;

    cout << "Nilai ini \"" << integer << "\" bertipe data int" << endl;
    cout << "Nilai ini \"" << pecahan << "\" bertipe data float" << endl;
    cout << "Nilai ini \"" << karakter << "\" bertipe data char" << endl;
    cout << "Nilai ini \"" << kata << "\" bertipe data string" << endl;
    cout << "Nilai ini \"" << ya_tidak << "\" bertipe data bool" << endl;

    return 0;
}
