#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    // Base case
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }

    else{
        bool remainingPart=linearSearch(arr+1, size-1, key);
        {
            return remainingPart;
        }
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    

    bool ans=linearSearch(arr, 5, 4);

    if(ans){
        cout<<"Present"<<endl;
    }

    else{
        cout<<"Not present"<<endl;
    }
    return 0;
}