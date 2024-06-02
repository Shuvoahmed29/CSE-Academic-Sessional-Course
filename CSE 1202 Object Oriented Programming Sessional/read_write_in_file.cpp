#include <bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    file = fopen("file.txt", "w");
    char ch[200] = "Shuvo Ahmed CSE-12batch PUST";
    fputs(ch, file);
    fclose(file);
    file = fopen("file.txt", "r");
    char c;
    while (!feof(file))
    {
        c = fgetc(file);
        cout << c;
    }
    fclose(file);
}