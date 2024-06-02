#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter sub string : ";
    string sub;
    cin >> sub;
    cout << "Enter main string : ";
    string main;
    cin >> main;
    int p = -1, cunt = 0, c = 0, index = -1;
    for (int i = 0; i < main.size(); i++)
    {
        if (main[i] == sub[0])
        {
            index = i;
            p = i;
            c = 0;
            for (int j = 0; j < sub.size(); j++)
            {
                if (main[p] == sub[j])
                {
                    c++;
                    p++;
                }
            }
            if (c == sub.size())
            {
                for (int j = 0; j < sub.size(); j++)
                {
                    if (main[index] == sub[j])
                    {
                        main[index] = '*';
                        index++;
                    }
                }
                cunt++;
            }
        }
    }
    cout << "\nNumber of sub-string: " << cunt << endl;
    cout << "Main string: " << main << endl;
}