#include <iostream>
using namespace std;

const int MAXN = 1005;
long long A[MAXN];
int N;

void printEvenReversed(int index) {
    if (index >= N)
        return;

    printEvenReversed(index + 1);

    if (index % 2 == 0)
        cout << A[index] << " ";
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> A[i];

    printEvenReversed(0);

    return 0;
}
