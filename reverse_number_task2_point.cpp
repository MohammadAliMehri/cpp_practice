#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main()
{
    int x;
    cout << "give me a number to reverse it : ";
    cin >> x;

    int reverse = 0; // sefre choon hanooz adad nadrim
    while (x > 0)
    {                                   // ta vaghti adad hast
        int digit = x % 10;             // gereftane akharin ragham
        reverse = reverse * 10 + digit; // ezafe kardan ragham be reverse
        x /= 10;                        // hazf kardan akharin ragham az adad
    }

    cout << "Reverse --> " << reverse << NEWLINE;
    return 0;
}
