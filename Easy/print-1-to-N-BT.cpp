#include<iostream>
using namespace std;

void print(int i, int n){
    
    // Base case : Agr i 1 se chota ho gya to wps return krjao
    if(i<1)
    return;

    // Recursive relation
    print(i-1, n);
    
    // Backtrack
    cout<<i<<" ";
}

int main(){

    int n;
    cin>>n;

    print(n, n);
    return 0;
}