#include <iostream>
using namespace std;

void printSpaces(int n) {
    if (n == 0)
        return;
    printSpaces(n - 1);
    cout << " ";
}

void printStars(int n) {
    if (n == 0)
        return;
    printStars(n - 1);
    cout << "*";
}

void printInverted(int current, int N) {
    if (current > N)
        return;

    printSpaces(current - 1);
    printStars(2 * (N - current + 1) - 1);
    cout << endl;

    printInverted(current + 1, N);
}

int main() {
    int N;
    cin >> N;

    printInverted(1, N);

    return 0;
}
