#include <iostream>
using namespace std;

int main()
{
    string user = "admin";
    string password = "1234";

    string u;
    string p;

    cout << "username ra vared konid: ";
    cin >> u;

    cout << "password ra vared konid: ";
    cin >> p;

    if (u == user && p == password)
    {
        cout << "welcome!";
    }
    else
    {
        cout << "error, try again.";
    }
}