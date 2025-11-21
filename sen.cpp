#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << "enter youre age: ";
    cin >> x;

    if (x < 13)
    {
        cout << "kid";
    }
    else if (x >= 13 && x < 20)
    {
        cout << "teenager";
    }
    else if (x >= 20 && x < 60)
    {
        cout << "adult";
    }
    else
    {
        cout << "aged";
    }

    return 0;
}