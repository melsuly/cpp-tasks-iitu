#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    double r = 1;
    int f = 1;

    for (int i = 2; i <= n; i++) {
        f = f * i;
        r = r + (1.0 / f);
    }

    cout << r;
}