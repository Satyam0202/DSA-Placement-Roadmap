#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number\t";
    cin>>num;

    string temp=to_string(num);
    stack<char> st;
    
    for(char ch:temp)
        st.push(ch);

    string rev="";
    while(!st.empty())
    {
        rev=rev+st.top();
        st.pop();
    }    
    int NUM=stoi(rev);
    cout<<"\n REVERSE IS \t"<<NUM;
    return 0;
}