#include<iostream>
using namespace std;

class Stack{
private://can only be accessed in class
int size;
int top;
int *arr;//to create dynamic array
public:
//constructor- used to initialize memory, object needs memeory
Stack(int s){//constructor- called automatically
  size=s;
  arr=new int[size];
  top=-1;//kyuki array ka initialization bhi 0 se hota hai
  }
bool isEmpty()//will check if stack is empty or not
{
  return top==-1;
  
}
//check stack is full or not
bool isFull(){
  return top==size-1;
}
// push operation return void kyuki kuch return nhi karra
void push(int value)
{
  if(isFull()){
    cout<<"stack is full"<<endl;
    return;
  }
  arr[++top]=value;
  cout<<"arr[top] element is pushed"<<endl; 
}
//display stack
void display(){
  if(isEmpty()){
    cout<<"stack is empty"<<endl
    return;
  }
  for(int i=top;i>=0;i--)//top se decrement
    {
      cout<<"["<<arr[i]<<"]"<<endl;
    }
}//delete
void deleteStack(){
  ~Stack{
  delete[]arr
  }
}
//peek operation
void peek(){
  if(isEmpty()){
    cout<<"stack is empty"<<endl;
    return; 
  }
  cout<<"top element="<<arr[top]<<endl;
}
void peek(){
  if(isEmpty()){
    cout<<"stack is empty"<<endl;
    return; 
  }
  cout<<"top element="<<arr[top]<<endl;
}

};
int main(){
  Stack st(5);// st is the object
  // stack size =5
  //stack is created
  cout<<"stack is created"<<endl;
  while(true)//when u dont know the range use while loop
  {
    int choice;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Peek"<<endl;
    cout<<"5.Delete stack"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    if(choice==1)
    {
      int val;
      cout<<"enter the element for push"<<endl;
      cin>>val;
      st.push(val)
    }
    else if(choice==3)
    {
      st.display();
    }
    else if(choice==2)
    {
      st.pop();
    }
    else if(choice==4)
    {
      st.peek();
    }
    else if(choice==5)
    {
      st.deleteStack();
    }
    else
    {
      break;
    }



    


  }
}
