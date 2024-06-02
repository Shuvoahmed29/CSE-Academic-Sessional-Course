#include <bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    // file = fopen("text.txt", "w");
    file = fopen("file.cpp", "r");
    char ch[200] = "Pabna University-PUST";
    // if (file != NULL)
    // {
    //     cout << "OK\n";
    //     fputs(ch, file);
    // }
    char c;
    while (!feof(file))
    {
        c = fgetc(file);
        cout << c;
    }
    fclose(file);
}