//Postfix to infix.cpp
#include<bits/stdc++.h>
using namespace std;
bool isOperand(char ch)
{
    return ((ch>='A' && ch <='Z') || (ch>='a' && ch<='z'));
}
int main()
{
    cout << "Enter Postfix: ";
    string str;
    cin >> str;
    stack<string> infix;

    for(int i=0; i<str.size(); i++)
    {
        if(isOperand(str[i]))
        {
            string op(1,str[i]);
            infix.push(op);
        }
        else
        {
            string op1 = infix.top();
            infix.pop();
            string op2 = infix.top();
            infix.pop();

            infix.push("("+op1+str[i]+op2+")");
        }
    }
    cout << "Infix Expression: ";
    while(!infix.empty())
    {
        cout << infix.top();
        infix.pop();
    }
}
