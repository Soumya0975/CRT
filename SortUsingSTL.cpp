#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={3,5,1,2,4};
    //sort the array in ascending order
    //std::sort(std::begin(arr), std::end(arr));
    sort(begin(arr), end(arr));
    //print the sorted array
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    return 0;
}

//cpp prgm to sort an array
#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int arraySize)
{
    for(int i=0;i<arraySize;i++)
    {
        cout<<a[i]<<" ";
    }
}
// driver code
int main()
{
    int a[]={1,5,8,9,6,7,3,4,2,0};
    //size of the array
    int asize=sizeof(a)/sizeof(a[0]);
    cout<<"the array before sorting is: \n";
    show(a,asize);
    //sort the array
    sort(a,a+asize);
    //sort(a, a + asize, greater<int>()); // for sorting in descending order
    cout<<endl<<"\n\n the array after sorting is: ";
    //print the array after sorting
    show(a,asize);
    return 0;
}

