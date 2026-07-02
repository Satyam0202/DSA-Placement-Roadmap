#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number\t";
    cin>>num;

    stack<int> st;
    while(num!=0)
    {
        int rem=num%2;
        st.push(rem);
        num=num/2;
    }
    cout<<"\n";
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}