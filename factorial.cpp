#include <iostream>
using namespace std;

long long factorial(long long n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    long long N;
    cin >> N;

    cout << factorial(N);

    return 0;
}
