#include<iostream>
using namespace std;

bool palindrome(string str, int i, int j){

    // Base case
    if(i>j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
    }

    else{
        // Recursive relation
        palindrome(str, i+1, j+1);
    }
}

int main(){

    string name="viiv";
    cout<<endl;

    bool isPalindrome=palindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout<<"It's a palindrome";
    }

    else{
        cout<<"Not a palindrome";
    }

    return 0;
}