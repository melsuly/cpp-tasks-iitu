#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;

    cin >> num;

    int a = stoi(num.substr(0, 1)) + stoi(num.substr(1, 1));
    int b = stoi(num.substr(2, 1));

    if (a == b) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}