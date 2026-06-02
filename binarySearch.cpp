#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int target)
{
  int low=0;
  int high=size-1;
  while(low<=high)
    {
      int mid=(low+high)/2;
      cout<<mid<<endl;
      if(arr[mid]==target)
      {
        return mid;
        
      }
      else if(arr[mid]<target)
      {
        low=mid+1;
      }
      else{
        high=mid-1;
      }
    }
return -1;
}
int main()

{

int arr[]={49,51,53,54,58,59,60,62};

int size=sizeof(arr)/sizeof(arr[0]);

int target=50;

int result =binarySearch(arr, size,target);
  if (result!=-1)
  {
    cout<<"element found at index="<<result<<endl;
  }
  else
  {
    cout<<"element not found"<<endl;
  }
}

//task1
hackerrank
{5,1,4,2,8}
  after sorting=[1,2,4,5,8 ]
