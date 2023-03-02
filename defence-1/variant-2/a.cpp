#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;

    int a = num / 100;
    int b = (num % 100) / 10;
    int c = num % 10;

    if ((a + b + c) % 3 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}