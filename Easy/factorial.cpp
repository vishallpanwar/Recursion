#include<iostream>
using namespace std;

int fact(int n){
    
    // Base case : Agr n ki value 5 hogyi hai to 1 return krdo
    if(n<1)
    return 1;
    
    // Logic
    return n * fact(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<fact(n);
    return 0;
}