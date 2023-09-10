#include<iostream>
using namespace std;

int sum(int n){

    if(n==0)
    return 0;

    int partial_ans=sum(n-1);
    return n+partial_ans;
}


int main(){
    int n;
    cin>>n;

    int ans=sum(n);
    cout<<ans;
}