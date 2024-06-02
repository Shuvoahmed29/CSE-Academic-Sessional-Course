#include <bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    file = fopen("input.txt", "w");
    char str[] = "Pabna University of Science and Technology- PUST";
    fputs(str, file);
    fclose(file);
    FILE *f, *f1;
    f = fopen("input.txt", "r");
    f1 = fopen("output.txt", "w");
    char c;
    while (!feof(f))
    {
        c = fgetc(f);
        fputc(c, f1);
    }
    fclose(f);
    fclose(f1);
}