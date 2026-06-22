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
int input()
{
    int n;
    cout<<"enter element > ";
    cin>>n;
    cout<<endl;
    return n;
}
int main()
{
    cout<<"\n-------------------------";
    cout<<"\n1.\tPush\n2.\tPop\n3.\tPeek\n4.\tShow\n5.\tExit\n";
    cout<<"-------------------------\n";
    while(true)
    {
        int command;
        cout<<"> ";
        cin>>command;

        switch(command)
        {
            case 1: {
                        int num=input();
                        push(num);
                    }
                    break; 
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: show();
                    break;   
            case 5: return 0;
            default :cout<<"Something Error...";
                    break;
        }
    }
}