#include<iostream>
using namespace std;

int add(int n){
    
    // Base case : Agr n ki value 0 hogyi hai to 0 return krdo
    if(n<1)
    return 0;
    
    // Logic
    return n + add(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<add(n);
    return 0;
}