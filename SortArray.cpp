#include<iostream>
using namespace std;

int isSorted(int arr[], int size){

    // Base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int remainingPart=isSorted(arr+1, size-1);
        return remainingPart;
        }
}

int main(){
    int arr[5]={2,4,1,8,9};
    int size=5;
    
    int ans=isSorted(arr, size);

    if(ans){
    cout<<"Sorted";
    }

    else{
        cout<<"Unsorted";
    }
    return 0;
}