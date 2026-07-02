#include<iostream>
using namespace std;

struct  node
{
    char ch;
    node* next; 
};
void push(node* &top,char c)
{
    node* newnode=new node;
    newnode->ch=c;
    newnode->next=NULL;

    if(top==NULL)
    {
       top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
}
void show(node* top)
{
    while(top!=NULL)
    {
        cout<<top->ch;
        top=top->next;
    }
}
int main()
{
    char str[100];
    cout<<"Enter String : ";
    cin>>str;

    node* top=new node;
    top=NULL;
    for(int i=0;str[i]!='\0';i++)
        push(top,str[i]);
    show(top);
    return 0;

}