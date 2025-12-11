#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main() {
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num<0 && num<10000000){
        cout<<"hoghoogh: "<<num<<NEWLINE;
    }else if(num<10000000 && num<15000000){
        cout<<"hoghoogh: "<<num*0.95<<NEWLINE;
    }else{
        cout<<"hoghoogh: "<<num*0.9<<NEWLINE;
    }
}
