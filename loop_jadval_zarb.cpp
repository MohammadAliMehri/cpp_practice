#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << NEWLINE;
    }
    return 0;
}