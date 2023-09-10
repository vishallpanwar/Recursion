#include<iostream>
using namespace std;

int fibo(int n){
    
    // Base case : Agr n 1 ya 0 ho to 1 hi return krdo
    if(n==0 || n==1)
    return 1;

    // Recursive relation
    return fibo(n-1) + fibo(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<fibo(n);
}