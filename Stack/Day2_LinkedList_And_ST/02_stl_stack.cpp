#include<iostream>
using namespace std;
#include<stack>

int input()
{
    cout<<"\nElement > ";
    int n;
    cin>>n;
    return n;
}
void show(stack<int> st)
{
    while(!st.empty())
    {
        cout<<"| "<<st.top()<<" |"<<endl;
        st.pop();
    }
}
int main()
{
    stack<int> st;
    cout<<"..................\n";
    cout<<"1\tPush\n2\tPop\n3\tPeek\n4\tShow\n5\tExit\n";
    cout<<"..................\n";

    while(true)
    {
        cout<<"Enter Command >";
        int cmd;
        cin>>cmd;
        switch(cmd)
        {
            case 1: {
                int n=input();
                st.push(n);
            }
                    break;
            case 2: st.pop();
                    break;
            case 4: show(st);
                    break;
            case 3: cout<<"Top Element Is "<<st.top()<<endl;
                    break;
            default:    cout<<"\nSomething Error\n";
                        break;
            case 5: return 0;                                   
        }
    }
    return 0;
}