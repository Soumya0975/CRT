#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int arraysize)
{
    for(int i=0;i<arraysize;++i)
    {
        cout<<a[i]<<" , ";
    }
    
        
}
int main(){
    int a[]={1,5,8,9,6,7,3,4,2,0};
    int asize=sizeof(a)/sizeof(a[0]);
    cout<<"\n the array size is: \n";
    show(a,asize);
    //now for binary search
    if(binary_search(a,a+10,2))
    {
        cout<<"\n element found in the array \n";
    }
    else
    {
        cout<<"\n element not found in the array \n";
    }
    return 0;
}