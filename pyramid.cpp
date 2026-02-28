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

void printPyramid(int current, int N) {
    if (current > N)
        return;

    printSpaces(N - current);
    printStars(2 * current - 1);
    cout << endl;

    printPyramid(current + 1, N);
}

int main() {
    int N;
    cin >> N;

    printPyramid(1, N);

    return 0;
}
