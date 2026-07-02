#include<iostream>
#include<stack>
using namespace std;

int input()
{
    cout<<"enter element >> ";
    int num;
    cin>>num;
    return num;
}
void pop(stack<int> &st)
{
    cout<<"\nPoped Element is "<<st.top();
    st.pop();
}
void pick(stack<int> st)
{
    cout<<"\nTop Element Is "<<st.top();
    st.top();
}
void show(stack<int> st)
{
    while(!st.empty())
    {
        cout<<"| "<<st.top()<<" |";
        cout<<"\n";
        st.pop();
    }
}
int main()
{
    stack<int> st;
    cout<<"..........................\n";
    cout<<"1.\tPush\n2.\tPop\n3.\tPeek\n4.\tShow\n5.\tExit\n";
    cout<<"..........................\n";
    while(true)
    {
        int cmd;
        cout<<"\nEnter choice\t";
        cin>>cmd;
        switch(cmd)
        {
            case 1: {
                        int num=input();
                        st.push(num);             
                    }
                    break;
            case 2: pop(st);
                    break;
            case 3: pick(st);
                    break;
            case 4: show(st);
                    break;
            case 5: return 0;
                    break;        
            default: cout<<"\nSomething Error!";
                    break;
        }
    }
}