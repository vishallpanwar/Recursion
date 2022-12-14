#include <iostream>
using namespace std;

int power(int a, int b){
    
    // Base case, agar power 0= ) return krdo, 1= Number return krdo
    if(b==0)
    return 0;

    if(b==1)
    return a;

    // Recursive call, ower nikalne ka formula
    int ans=power(a,b/2);

    if(b%2==0){
        return ans*ans;
    }

    else{
        return a*ans*ans;
    }
}

int main(){

    int a, b;
    cin>>a>>b;

    int ans=power(a, b);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}