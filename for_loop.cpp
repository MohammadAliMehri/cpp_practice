#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main()
{
// simple for loop 0 to 10
   for (int i = 0; i < 10; i++)
    {
        cout << i << NEWLINE;
    } cout<<"simple loop."<<NEWLINE;


// loop for even numbers 0 to 100
for (int i = 0; i < 100; i++)
{
    if (i % 2 == 0)
    {
        cout << i << NEWLINE;
    }
} cout<<"even numbers."<<NEWLINE;

// loop for odd numbers 0 to 100
    for (int i  = 1; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << NEWLINE;
        }
    } cout<<"odd numbers."<<NEWLINE;

    // جدول ضرب ۵
    for (int i = 1; i <= 10; i++) {
        cout << "5 * " << i << " = " << 5 * i << NEWLINE;
    }

}