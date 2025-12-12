#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    int number;
    cout << "ye adad kamtar az 10 vared konid: ";
    cin >> number;

    if (number >= 10) {
        cout << "Error!!" << NEWLINE;
        return 1;
    }

    cout << "mazhabad az " << number << " ta 100:" << NEWLINE;
    for (int a = number; a <= 100; a += number) {
        cout << a << " ";
    }
    return 0;
} 