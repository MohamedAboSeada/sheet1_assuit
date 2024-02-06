#include <iostream>
using namespace std;

int main() {
    int EndNumber, SumNumber;
    cin >> EndNumber >> SumNumber;

    int WaysCounter = 0;

    for (int i = 0; i <= EndNumber; i++) {
        for (int j = 0; j <= EndNumber; j++) {
            int k = SumNumber - (i + j);
            if (k >= 0 && k <= EndNumber) {
                WaysCounter++;
            }
        }
    }

    cout << WaysCounter << "\n";
    return 0;
}