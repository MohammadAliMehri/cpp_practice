#include <iostream>
#include <string>
using namespace std;
#define NEWLINE '\n'

int main()
{
    int age;
    string membership;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter membership type (normal/silver/gold): ";
    cin >> membership;

    if (age < 0)
    {
        cout << "invalid age!";
    }
    else if (membership == "gold")
    {
        cout << "Priority: Very High (Gold Member)";
    }
    else if (membership == "silver" && age > 50)
    {
        cout << "Priority: High (Silver + Age above 50)";
    }
    else if (membership == "silver")
    {
        cout << "Priority: Medium (Silver Member)";
    }
    else if (membership == "normal" && age > 60)
    {
        cout << "Priority: Medium (Normal + Age above 60)";
    }
    else if (membership == "normal")
    {
        cout << "Priority: Low (Normal Member)";
    }
    else
    {
        cout << "Invalid membership type!";
    }

    return 0;
}
