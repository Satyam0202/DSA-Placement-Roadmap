#include<iostream>
using namespace std;
#define size 5
int stack[size];
int top=-1;

bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}
bool isFull()
{
    if(top==size-1)
        return true;
    else
        return false;
}
void push(int element)
{
    if(!isFull())
    {
        stack[++top]=element;
        cout<<"Element  Pushhed...\n";
    }
    else
        cout<<"Sorry Stack Is Already Full...\n";
}
void pop()
{
    if(!isEmpty())
    {
        cout<<"Element Poped... "<<stack[top--]<<endl;
    }
    else
        cout<<"Sorry Stack  Is Already Empty....\n";
}
void peek()
{
    if(!isEmpty())
        cout<<"Element In Top Is.. \n"<<stack[top]<<endl;
    else
        cout<<"Sorry Stack is Already Empty!..\n";
}
void show()
{
    if(!isEmpty())
    {
        for(int i=top;i>=0;i--)
            cout<<"\n| "<<stack[i]<<" |";
    }
    else
        cout<<"Sorry Stack Is Already Empty!...\n";
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    show();
    cout<<endl;

    pop();
    show();
    cout<<endl;

    peek();
    show();
    cout<<endl;
    
    return 0;
}