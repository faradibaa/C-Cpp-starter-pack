#include <iostream>

using namespace std;

/*
    Mengurutkan 3 bilangan secara descendant (dari terbesar ke terkecil)
*/

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if(n1 > n2) {
        if(n1 > n3) {
            if(n2 > n3) { // n1, n2, n3 (sudah urut sejak awal)
                cout << n1 << ", " << n2 << ", " << n3 << endl;
            }
            else { // n3 > n2; n1, n3, n2
                cout << n1 << ", " << n3 << ", " << n2 << endl;
            }
        }
        else { // n3 > n1; n3, n1, n2
            cout << n3 << ", " << n1 << ", " << n2 << endl;
        }
    }
    else { // n2 > n1
        if(n1 > n3) { // n2, n1, n3
            cout << n2 << ", " << n1 << ", " << n3 << endl;
        }
        else { // n3 > n1
            if(n2 > n3) { // n2, n3, n1
                cout << n2 << ", " << n3 << ", " << n1 << endl;
            }
            else { // n3 > n2; n3, n2, n1
                cout << n3 << ", " << n2 << ", " << n1 << endl;
            }
        }
    }
    return 0;
}
