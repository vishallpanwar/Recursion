#include<iostream>
using namespace std;

void print(int i, int n){
    
    // Base case : Agr i ki value 1 se choti hogyi to wps return krjao
    if(i<1)
    return;
    
    // Logic
    cout<<i<<endl;

    // Recursive relation
    print(i-1, n);
}

int main(){

    int n;
    cin>>n;

    print(n, n);
    return 0;
}