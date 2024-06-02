// 3. Pattern matching with string and replace substring.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter main string : ";
    string main;
    cin >> main;
    cout << "Enter sub string : ";
    string sub;
    cin >> sub;
    for (int i = 0; i < main.size(); i++)
    {
        if (main[i] == sub[0])
        {
            int p = i;
            int cunt = 0;
            for (int j = 0; j < sub.size(); j++)
            {
                if (main[p] == sub[j])
                {
                    cunt++;
                    p++;
                }
                else
                    break;
            }
            if (cunt == sub.size())
            {
                for (int j = p - 1; j >= p - sub.size(); j--)
                    main[j] = '*';
            }
        }
    }
    cout << "Main: " << main << endl;
}