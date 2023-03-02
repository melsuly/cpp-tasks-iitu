#include <iostream>

using namespace std;

int main() {
    double a;

    cin >> a;
    
    if (a < 100) {
        a = a * 1.2;
    } 
    if (a > 500) {
        a = a * 0.9;
    }

    cout << a;

    return 0;
}