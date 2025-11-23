#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    cout << "Four-digit numbers that are divisible by 7 but not divisible by 3:" << NEWLINE;
    cout << "========================================" << NEWLINE;
    
    int count = 0;
    
    for (int i = 1000; i <= 9999; i++) {
        if (i % 7 == 0 && i % 3 != 0) {
            cout << i << " ";
            count++;
            
            if (count % 10 == 0) {
                cout << NEWLINE;
            }
        }
    }
    
    cout << NEWLINE << "========================================" << NEWLINE;
    cout << "Total count of numbers: " << count << NEWLINE;
    
    return 0;
}
