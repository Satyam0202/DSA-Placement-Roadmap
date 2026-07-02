#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number\t";
    cin>>num;

    stack<int>st;
    string s=to_string(num);
    
    for(char ch:s)
        st.push(ch);

    int rev=0;    
    while(!st.empty())
    {
        int num=st.top()-'0';
        rev=rev*10+num;
        st.pop();
    }
    cout<<"\nHere Original Number Is "<<num<<" And Reverse Of This Number Is "<<rev<<endl;
    if(rev==num)
        cout<<"So It Is Polindrome";
    else
        cout<<"No It Is Not Polinddrome";
    return 0;
}
