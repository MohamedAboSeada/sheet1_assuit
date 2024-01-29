#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll A, B, C, min, max;
    cin >> A >> B >> C;

    min = A; // Assume A is the minimum
    max = A; // Assume A is the maximum

    if (B < min) {
        min = B; // Update min if B is smaller
    }
    if (C < min) {
        min = C; // Update min if C is smaller
    }

    if (B > max) {
        max = B; // Update max if B is larger
    }
    if (C > max) {
        max = C; // Update max if C is larger
    }

    cout << min << " " << max << endl;
    return 0;
}