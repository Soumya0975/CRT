#include<iostream>
using namespace std;
void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {//value if i=1 then 2
    
        int key=arr[i];//key =3 then 8
        int j=i-1;//j=0, becomes j=-1,now check condition= -1> 0 so while loop se bahar nikl jayega
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;//index 0 pr key element
    }

}
int main()
{
    int arr[]={5,3,8,6,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
//Q) Rearrange the positive and negative numbers rearrange them in alternating fashion
//logic separate positive and negative and merge them alternatively
#include<iostream>
using namepspace std;
void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {//value if i=1 then 2
    
        int key=arr[i];//key =3 then 8
        int j=i-1;//j=0, becomes j=-1,now check condition= -1> 0 so while loop se bahar nikl jayega
        while(j<=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;//index 0 pr key element
    }

}
int main()
{
    int arr[]={-1,2,-3,4,5,-6};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}

