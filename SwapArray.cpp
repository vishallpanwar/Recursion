#include <iostream>
using namespace std;
void reverse(int a[],int start,int end)
{
    if(start>=end)
        return;

    swap(a[start],a[end]);
    start++;
    end--;

    reverse(a,start,end);
}
int main()
{
    int a[]{1,2,3,4,5};
    int start =0;
    int end = 4;
    reverse(a,start,end);
    for(int i =0;i<5;++i)
        cout<<a[i]<<" ";
}