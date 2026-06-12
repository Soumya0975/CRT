#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(21);// the value pushed in the stack should be of the same data which is written during declaration of the stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    cout<<stack.top();
    int num=0;
    stack.push(num);//[21,22,24,25,0]
    stack.pop();//[21,22,24,25]
    stack.pop();//[21,22,24]
    while(!stack.empty())
    {
        cout<<stack.top()<<" ";//24 22 21
        stack.pop();
    }  
    return 0;
}