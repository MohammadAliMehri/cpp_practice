#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    cout << "==================================================" << NEWLINE;
    cout << "       MULTIPLICATION TABLES (1 to 10)           " << NEWLINE;
    cout << "==================================================" << NEWLINE;
    cout << NEWLINE;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Multiplication Table for " << i << ":" << NEWLINE;
        cout << "--------------------------------------------------" << NEWLINE;
        
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << (i * j) << NEWLINE;
        }
        
        cout << NEWLINE;
    }
    
    cout << "==================================================" << NEWLINE;
    
    return 0;
}
