#include<iostream>
using namespace std
int main()
{
  int a=87;
    int*p1=&a;
    printf<<"address of a =%u.\n",&a
    printf<<"address of p1 =%u.\n",&p1
    printf<<"value of p1 =%d.\n",&p1
    printf<<"value of a =%d.\n",&a
    printf<<"value of a =%d.\n",*p1
    printf<<"value of a =%d.\n",*(&a)
        return 0;




}



#include<iostream>
using namespace std
int main()
{
  int a=87;
    int*p1=&a;
    int**qi=&p1;
    cout<<"address of a =%u.\n",&a
    cout<<"address of p1 =%u.\n",&p1
    cout<<"address of q1 =%u.\n",&qi
    cout<<"value of p1 =%d.\n",&p1
    cout<<"value of q1 =%d.\n",&q1
    cout<<"value of a =%d.\n",&a
    cout<<"value of a =%d.\n",*p1
    cout<<"value of a =%d.\n",*(&a)
    cout<<"value of a =%d.\n",**&a
return 0;
}


//print the size of pointer and sixe of value
#include<iostream>
using namespace std
int main()
{
    char a='x',*p1=&a;
    int b=12,*p2=&b;
    float c=2.5,*p3=&c;
    double c=18.33,*p4=&d;
cout<<"sizeof(p1)=%u,sizeof(*p1)=%u\n",sizeof(p1),sizeof(*p1);
cout<<"sizeof(p2)=%u,sizeof(*p2)=%u\n",sizeof(p2),sizeof(*p2);
cout<<"sizeof(p3)=%u,sizeof(*p3)=%u\n",sizeof(p3),sizeof(*p3);
cout<<"sizeof(p4)=%u,sizeof(*p4)=%u\n",sizeof(p4),sizeof(*p4);
return 0;
}

//scalar factor
// we cant multiply or dic ptr value but we can add and subtract ptr
#include<iostream>
using namespace std
int main()
{
    int a=5,*pi=&a;
    char b='b',*pc=&b;
    float c=5.5,*pf=&c;
    cout<<"value of pi = address of a =%u.\n",pi;
    cout<<"value of pc = address of b =%u.\n",pc;
    cout<<"value of pf = address of c =%u.\n",pf;
    pi++; pc++; pf++;
    cout<<" now value of pi =%u.\n",pi;
    cout<<" now value of pc =%u.\n",pc;
    cout<<" now value of pf =%u.\n",pf;
return 0;
}

//
#include<iostream>
using namespace std
int main()
{
 int arr[5]={5,10,20,25,30},=0;
for(i=0;i<5;i++)
{
    cout<<"value of a[%d]\n",i;
    cout<<"%d\n",arr[i];
    cout<<"%d\n",i[arr];
    cout<<"%d\n",*(arr+i);

    
    


}


//casting int to char
#include<iostream>
using namespace std
int main()
{ 
    int a=66;
    char*c;
    c=(char*)&a; // explicit typecasting
cout<<"%d\n"*c;
cout<<"%c\n"*c;
return 0;
}

//
#include<iostream>
using namespace std
int main()
{ 
     int arr[]={3,6,9,12,15,18};
    fun(&arr);
return 0;
}
void func(int*p){
    int i;
    for(i=0;i<6;i++){
        cout,,"&d\n",*p);
        p++;
    }
}















