#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if(a == 100) {
        cout << "Excellent" << endl;
    }
    else if(a >= 80) {
        cout << "Nice" << endl;
    }
    else if(a > 60) {
        cout << "Lumayan" << endl;
    }
    else if(a > 20) {
        cout << "Coba lagi" << endl;
    }
    else {
        cout << "Input invalid" << endl;
    }
    return 0;
}
