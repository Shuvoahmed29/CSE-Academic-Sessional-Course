//Postfix Evaluate.cpp
#include<bits/stdc++.h>
using namespace std;
bool isOperand(char ch)
{
    int n = ch-'0';
    return (n>=0 && n<=9);
}
int main()
{
    cout << "Enter Postfix: ";
    string str;
    cin >> str;
    stack<int> infix;

    for(int i=0; i<str.size(); i++)
    {
        if(isOperand(str[i]))
        {
            infix.push(str[i]-'0');
        }
        else
        {
            int a = infix.top();
            infix.pop();
            int b = infix.top();
            infix.pop();

            int ans;
            if(str[i]=='+') ans = a+b;
            else if(str[i] == '-') ans = a-b;
            else if(str[i] == '*') ans = a*b;
            else if(str[i] == '/') ans = a/b;

            infix.push(ans);
        }
    }
    cout << "Infix Expression: ";
    while(!infix.empty())
    {
        cout << infix.top();
        infix.pop();
    }
}
