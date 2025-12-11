#include <iostream>
using namespace std;
#define NEWLINE '\n'
int main(){
    for (int i=2;i<=10;i=i+2){
        cout<<i<<" ";
    }
    cout<<NEWLINE;
    int i=0;
    while(i<=10){
        cout<<i<<" ";
        i=i+2;
    }
    cout<<NEWLINE;
    return 0;
}