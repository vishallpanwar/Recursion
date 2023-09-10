#include<iostream>
using namespace std;

int power(int x, int n){
    
    // Base case : Agr power 0 hojati hai to return 1
    if(n==0)
    return 1;

    // Recursive relation
    return x * power(x, n-1);

}

int main(){

    int x, n;
    cin>>x>>n;

    cout<<power(x, n);
    return 0;
}