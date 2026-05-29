#include<iostream>
using namespace std;
int main(){
  int arr[1]={2};
  cout<<0[arr];
  return 0;
}


#include<iostream>
using namespace std;
int main(){
  int arr[3],i=0;
  for(i=0;i<3;i++){
    arr[i]=i;
      }
  for(i=0;i<3;i++){
    cout<<arr[i];
  }
  return 0;
}

//012


#include<iostream>
using namespace std;
int main(){
  int arr[3],i,j;
    arr[0]=11;
    arr[1]=22;
    arr[2]=33;
  for(i=0;i<3;i++){
    j+=i;
  }
  cout<<arr[j];
  return 0;
}

#include<iostream>
using namespace std;
int main(){
  int arr[3],i,temp;
  arr[0]=11;
  arr[1]=22;
  arr[2]=33;
  temp=arr[0];
  arr[0]=arr[2];
  arr[2]=temp;
  for(i=0;i<3;i++){
    cout<<arr[i];
  }
  return 0;
}

//33 22 11

#include<iostream>
using namespace std;
int main(){
  char name[]="ashish";
  int i;
for(i=0;i<6;i++){
  cout<<name[i];
  return 0;
}

//ashish


#include<iostream>
using namespace std;
int main(){
  char name[]="abcdef";
  int i=0;
  cout<<name[i];
  cout<<i[name];
  cout<<name[i+2];
  cout<<i[name+2];
  return 0;
}
// aacc

#include<iostream>
#define arr "abcd"
using namespace std;
int main(){
  cout<<arr[2];
return 0;
}
// c

#include<iostream>
using namespace std;
int main(){
  int arr[2]={1,2,3,4,5};
  cout<<arr[3];
return 0;
}
// 0 or garbage value
// error: too many initializers for 'int [2]'

#include<iostream>
using namespace std;
int main(){
int i=0;
char s[4]={'\0','\0','\0','\0'}
for(i=0;i<4;i++){

  cout<<s[i];
}
return 0;
}

// no op

//tcs
#include<iostream>
using namespace std;

int main() {
int arr[] = {1, 2, 4, 5};
for(int i=0;i<=5;i++) 
  if (i==3) 
    continue;
cout<<i<<6-i<<endl;
return 0;
}

//using array
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " " << arr[3-i] << endl;
    }

    return 0;
}
1 5
2 4
4 2
5 1







