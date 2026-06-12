#include<iostream>
using namespace std;
class Queue{
    private:
    int *arr;
    int front;
    int rear;
    int capacity;
    public://initialize queue
    Queue(int size)//constructor
    {
        capacity=size;
        arr=new int[capacity];
        front=0;
        rear=-1;
    }
    //isEmpty operation
    bool isEmpty(){
        return rear<front;
    }
    bool isFull(){
        return rear==capacity-1;
    }
    void Enqueue(int value){//add element in the queue
        if(isFull()){
            cout<<"Queue overflow! cannot insert"<<value<<endl;
            return;

        }
        arr[++rear]=value;
        cout<<value<<"inserted into queue"<<endl;

    }
    void Dequeue(){//remove or delete element in the queue
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<arr[front]<<"removed from queue"<<endl;
        front++;

        }
        void frontElement(){
            if(isEmpty()){
                cout<<"queue is empty"<<endl;
                return;
            }
            cout<<"front value="<<arr[front];
        }
        void display(){
            if(isEmpty()){
                cout<<"queue is empty"<<endl;
                return;
            }
            cout<<"queue";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<endl;
            }
            cout<<endl;
        }
            ~Queue(){
                delete[]arr;
            }
        };


int main(){
    Queue obj(5);
    cout<<"Queue created"<<endl;
    while(true){
        int choice;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Dequeue"<<endl;
        cout<<"4.peek"<<endl;
        cout<<"5.delete queue"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        if(choice==1){
            int val;
            cout<<"enter the element to add in queue"<<endl;
            cin>>val;
            obj.Enqueue(val);
        }
        else if(choice==2){
            obj.display();
        }
        else if(choice==3){
            obj.Dequeue();
        }
        else if(choice==4){
            obj.frontElement();
        }
        else if(choice==5){
            obj.~Queue();
        }
        else if(choice==6){
            break;
        }


}
}
