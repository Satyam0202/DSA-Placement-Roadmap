#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

bool isEmpty(node* top)
{
    if(top==NULL)
        return 1;
    else 
        return 0;
}
int input()
{
    int el;
    cout<<"element> ";
    cin>>el;
    return el;
}
void push(node* &top)
{
    node* newnode=new node;
    int num=input();
    newnode->data=num;
    newnode->next=NULL;

    if(isEmpty(top))
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;              
    }
}
void show(node *top)
{
    cout<<"\nData Are as Follows....";
    while(top!=NULL)
    {
        cout<<"\n| "<<top->data<<" |";
        top=top->next;
    }
    cout<<"\n";
}
void pop(node* &top)
{
    if(isEmpty(top))
        cout<<"Sorry Stack Is Fully Empty..\n";
    else
    {
        int temp=top->data;
        top=top->next;
        cout<<"Element "<<temp<<" Poped From Stack\n";
    }    
}
void peek(node* top)
{
    if(isEmpty(top))
        cout<<"This Stck IS Already Empty..\n";
    else
        cout<<"Top Value Is "<<top->data<<endl;
}
int main()
{
    node* top=new node;
    top=NULL;

    cout<<"1.\tPush\n2.\tPop\n3.\tShow\n4.\tPeek\n5.\tExit\n.....................................\n";
    while(true)
    {
        cout<<"choice > ";
        int cmd;
        cin>>cmd;
        switch(cmd)
        {
            case 1: push(top);
                    break;
            case 2: pop(top);
                    break;        
            case 3: show(top);
                    break;
            case 4: peek(top);
                    break;        
            default: cout<<"Hey Something Error!..\n";
                    break;
            case 5: return 0;
        }
    }
    return 0;
}