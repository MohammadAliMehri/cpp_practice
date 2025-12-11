#include <iostream>
using namespace std;
#define NEWLINE '\n'
// baraye check kardan avval bodane adad
int main(){
    int i,n;
    cout<<"enter a number: ";
    cin>>n;
    for (i=2;i<n;i++){
        if(n%i==0){
            cout<<"avval nist"<<NEWLINE;
            break;
        }
    }
    if(i==n){
        cout<<"avval ast"<<NEWLINE;
    }
    return 0;
}