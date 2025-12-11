#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    int x;
    cout << "give me a number to reverse it ;) : ";
    cin >> x;

    int reverse = 0;
    while (x > 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }

    cout << "Reverse --> " << reverse << NEWLINE;
    return 0;
}