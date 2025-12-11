#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    int i = 0;
    while (i <= 10)
    {
        cout << i << NEWLINE;
        i++;
    } cout<<"while loop."<<NEWLINE;
// do while
    int j = 0;
    do
    {
        cout << j << NEWLINE;
        j++;
    } while (j <= 10); cout<<"do while loop."<<NEWLINE;
 
   /* string str;
    while (str != "bye")
    {
        cout << "Say bye to stop program: ";
        cin >> str;
    }
    cout<<"Program stopped."<<NEWLINE;
*/

}
