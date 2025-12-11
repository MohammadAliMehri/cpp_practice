#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main(){
    double arz,tool;
    cout<<"arz ra vared koonid: ";
    cin>>arz;
    cout<<"tool ra vared koonid: ";
    cin>>tool;

    double mohit = 2*(arz+tool);
    double masahat = arz*tool;
    
    cout<<"mohit: "<<mohit<<NEWLINE;
    cout<<"masahat: "<<masahat<<NEWLINE;
    return 0;
}