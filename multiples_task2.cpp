#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    int number;
    cout << "Enter a number less than 10: ";
    cin >> number;

    if (number >= 10) {
        cout << "Error!!" << NEWLINE;
        return 1;
    }

    cout << "Multiples of " << number << " up to 100:" << NEWLINE;
    for (int a = number; a <= 100; a += number) {
        cout << a << " ";
    }
    return 0;
} 