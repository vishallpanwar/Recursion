#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){

    // Base case
    if((size==0) || (size==1)){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    else {
        bool remainingPart=isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main(){
    int arr[5]={2,4,7,8,9};
    int size=5;

    bool ans=isSorted(arr,5);

    if(ans){
        cout<<"Array is sorted";
    }

    else{
        cout<<"Array is not sorted";
    }

    return 0;
}