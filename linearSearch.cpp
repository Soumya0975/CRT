#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int target)
{
  for(int i=0;i<size;i++){
    if(arr[i]==target)
    {
      return i;//index 6
    }
  }
  
int main() 
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=15;
    int result= linearSearch(arr,size,target);
    if(result!=-1){
        cout<<"element found at index="<<result<<endl;
}
else
  cout<<"elemnt not found";
}


//task1
//arr=[3,4,6,7,2,3,2,4,2]
//target 2
//if elemnt found return count =3
//else return -1
