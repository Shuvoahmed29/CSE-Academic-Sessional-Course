//14. Evaluation of postfix expresion using stack.cpp
#include<bits/stdc++.h>
using namespace std;

bool isOperand(char ch)
{
    return(ch >= '0' && ch <= '9');
}
int main()
{
    cout << "Enter postfix expression: ";
    string str;
    cin >> str;
    stack<char> infix;

    for(int i = 0; i < str.size(); i++)
    {
        if(isOperand(str[i]))
        {
            infix.push(str[i]);
        }
        else
        {
            char op1 = infix.top();
            infix.pop();
            char op2 = infix.top();
            infix.pop();

            int a = op1-'0';
            int b = op2 -'0';
            int ans;
            if(str[i] == '+')
            {
                ans = a+b;
            }
            else if(str[i] == '-')
            {
                ans = a-b;
            }
            else if(str[i] == '*')
            {
                ans = a*b;
            }
            else if(str[i] == '/')
            {
                ans = a/b;
            }
            char op3 = ans + '0';
            infix.push(op3);
        }
    }
    cout << "Postfix value: ";
    cout << infix.top() << endl;
}
