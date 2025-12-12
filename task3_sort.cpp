#include <iostream>
using namespace std;
#define NEWLINE '\n'

void sort_entekhabi(int a[], int n){
    for (int i=0;i<n-1;i++){
        int min_index=i;
        for (int j=i+1;j<n;j++){
            if(a[j] < a[min_index])
                min_index=j;
        }   
        int t = a[i];
        a[i]=a[min_index];
        a[min_index]=t;
    }    
}
int main(){
    int a[10];
    cout<<"##########################"<<NEWLINE;
    cout<<"10 ta adad bede xD."<<NEWLINE;
    cout<<"##########################"<<NEWLINE;
    for (int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"##########################"<<NEWLINE;
    cout<<"adad haye morttab shoode"<<NEWLINE;
    cout<<"##########################"<<NEWLINE;
    sort_entekhabi(a,10);
    for (int i=0;i<10;i++){
        cout<<a[i]<<", ";
    }
    cout<<NEWLINE;
    return 0;
}