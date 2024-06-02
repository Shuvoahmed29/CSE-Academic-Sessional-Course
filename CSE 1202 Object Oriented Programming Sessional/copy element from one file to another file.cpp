#include <bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    file = fopen("input.txt", "w");
    string str;
    cin >> str;
    fputs(str, file);
    fclose(file);
}