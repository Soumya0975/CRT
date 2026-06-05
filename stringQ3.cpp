//find length of string using strlen() function
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main(){
    char a[20]="Ashish";
    char b[20]={'A','s','h','i','s','h','\0'};
    char c[20];
    cout<<"Enter string: ";
    cin.getline(c,20);
    cout<<"length of string a= "<<strlen(a)<<endl;
    cout<<"length of string b= "<<strlen(b)<<endl;
    cout<<"length of string c= "<<strlen(c)<<endl;
    return 0;

}
