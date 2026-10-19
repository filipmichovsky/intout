#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Vstup: \n";

    if (cin >> x) {
        cout << "Nacetl jste " << x << "!\n";
    }

    else {
        cout << "Nezadali jste zadne cislo!\n";
        return 1;
    }

}