#include <iostream>
using namespace std;
#define NEWLINE '\n'

void sort_entekhabi(int a[], int n){ // sort entekhabi
    for (int i=0;i<n-1;i++){ // har dorre baraye yek ja be ja kardan
        int min_index=i; // gereftane kochiktarin adad
        for (int j=i+1;j<n;j++){ // jostojo baraye kochiktarin adad
            if(a[j] < a[min_index]) // agar adad j kochiktar bood
                min_index=j; // update kardan min_index
        } // payan jostojo  
        int t = a[i]; // avaz kardan adad ha
        a[i]=a[min_index]; // avaz kardan adad ha
        a[min_index]=t; // avaz kardan adad ha
    }    
}
int main(){
    int a[10]; // araye baraye 10 adad
    cout<<"##########################"<<NEWLINE;
    cout<<"10 ta adad bede xD."<<NEWLINE;
    cout<<"##########################"<<NEWLINE;
    for (int i=0;i<10;i++){ // gereftane 10 adad
        cin>>a[i]; // voroodi gereftan
    }
    cout<<"##########################"<<NEWLINE;
    cout<<"adad haye morttab shoode"<<NEWLINE;
    cout<<"##########################"<<NEWLINE;
    sort_entekhabi(a,10); // seda zadan tabe sort
    for (int i=0;i<10;i++){ // chap kardan adad
        cout<<a[i]<<", "; // chap kardan har adad
    } // payan chap
    cout<<NEWLINE;
    return 0;
}
