#include <iostream>
using namespace std;

int main() {
    int i, j, x;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            cout << " ";
        }

        for (x = 1; x <= i; x++) {
            cout << "#";
        }

        for (j = 1; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}
