#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main()
{
    int number;
    cout << "ye adad kamtar az 10 vared konid: ";
    cin >> number;

    if (number > 10) // check mikonim ke adad kamtar az 10 bashe 
    {
        cout << "Error!!" << NEWLINE; // payam khata
        return 1;
    }

    cout << " mazrab haaye " << number << " | az 0" << " ta 100:" << NEWLINE; // payam
    for (int a = number /* az khod number shoro mikone a */; a <= 100 /* ta vaqti kochik ta mosavi 100 bashe hesab mikone*/; a = a + number)
    {                     // halghe baraye hesab kardan mazrabha
        cout << a << " "; // chap kardan har mazrab
    }
    return 0;
}
