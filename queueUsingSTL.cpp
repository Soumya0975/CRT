#include<iostream>
#include<algorithm>
using namespace std;
//print the queu
void show(int queue<int> gq)
{
    queue<int> g=gq;
    while(!g.empty())
    {
        cout<<'\t'<<g.front();
        g.pop();
}
cout<<'\n';
}
int main()
{
    queue<int> que;
    que.push(11);
    que.push(22);
    que.push(33);

    cout<<"the queue que is: ";
    show(que);

    cout<<"\n que.size() : "<<que.size();
    cout<<"\n que.front() : "<<que.front();
    cout<<"\n que.back() : "<<que.back();
    cout<<"\n que.pop() : "<<que.pop();
    que.pop();
    show(que);
    return 0;
}