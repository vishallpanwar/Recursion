#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[], int left, int right){
    
    // Base case : Agr left right ke aage chla gya hai to ruk jao
    if(left>right)
    return;
    
    // Operation
    swap(arr[left], arr[right]);
    
    // Recursive relation
    reverse(arr, left+1, right-1);
    
}

int main(){

    int arr[5]={1,2,3,4,5};
    int left=0;
    int right=4;

    reverse(arr, left, right);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}