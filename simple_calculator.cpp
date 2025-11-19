#include <iostream>
using namespace std;

int main()
{
    double n1, n2;
    char op;
    cout << "enter a first number: ";
    cin >> n1;
    cout << "select operation(-,+,*,/): ";
    cin >> op;
    cout << "enter a second number: ";
    cin >> n2;
    if (op == '+')
    {
        cout << "result: " << n1 + n2;
    }
    else if (op == '-')
    {
        cout << "result: " << n1 - n2;
    }
    else if (op == '*')
    {
        cout << "result: " << n1 * n2;
    }
    else if (op == '/')
    {
        if (n2 != 0)
        {
            cout << "result: " << n1 / n2;
        }
        else
        {
            cout << "error!";
        }
    }
}