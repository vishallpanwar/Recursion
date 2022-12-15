#include <iostream>
using namespace std;

int reachHome(int src, int dest){

    // Base case
    if(src==dest){
        cout<<"Reached";
        return 0;
    }
    
    //Processing
        src++;

    //Recursive relation
    reachHome(src, dest);
}

int main(){
    int src=1;
    int dest=10;

    int ans=reachHome(src, dest);
    cout<<ans;
    return 0;
}