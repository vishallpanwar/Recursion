#include<iostream>
using namespace std;

void print(int i, int n){
    
    // Base case : Agr n ki value n se bdi hogyi hai to wps return krjao
    if(i>n)
    return;
    
    // Logic
    cout<<"Vishal"<<endl;

    // Recursive relation
    print(i+1, n);
}

int main(){

    int n;
    cin>>n;

    print(1, n);
    return 0;
}