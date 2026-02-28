#include <iostream>
using namespace std;

void printBinary(long long n) {
    if (n == 0)
        return;

    printBinary(n / 2);
    cout << n % 2;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        printBinary(N);
        cout << endl;
    }

    return 0;
}
