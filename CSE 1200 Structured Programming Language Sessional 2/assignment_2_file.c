//1. Write a c program to open a file and write some text and close its.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    file = fopen("shuvo.txt", "w");
    char str[10000];
    gets(str);
    if (file == NULL)
        printf("Error opening\n");
    else
    {
        printf("Writing Successfully\n");
        fputs(str, file);
    }
    fclose(file);
    return 0;
}*/

//2. Write a C program to delete a file.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    if (remove("shuvo.txt") == 0)
        printf("File deleted successfully\n");
    else
        printf("Error deleting\n");
    return 0;
}*/

//3.Write a C program to copy a file from one location to other location.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file1, *file2;
    file1 = fopen("shuvo.txt", "r");
    file2 = fopen("tamim.txt", "w");
    char ch;
    ch = fgetc(file1);
    while (ch != EOF)
    {
        fputc(ch, file2);
        ch = fgetc(file1);
    }
    printf("File copied successfully\n");
    fclose(file1);
    fclose(file2);
    return 0;
}*/

//4.Write a C program to copy a data of file to other file.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file1, *file2;
    file1 = fopen("shuvo.txt", "r");
    file2 = fopen("tamim.txt", "w");
    char ch;
    ch = fgetc(file1);
    while (ch != EOF)
    {
        fputc(ch, file2);
        ch = fgetc(file1);
    }
    printf("File copied successfully\n");
    fclose(file1);
    fclose(file2);
    return 0;
}*/

//5.Write a C program which display source code as an output.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    file = fopen("assignment_2_file.c", "r");
    char ch;
    ch = fgetc(file);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(file);
    }
    fclose(file);
    return 0;
}*/

//6.Write a C program which writes string in the file.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    file = fopen("shuvo.txt", "w");
    char str[10000];
    gets(str);
    if (file == NULL)
        printf("Error opening\n");
    else
    {
        printf("Writing Successfully\n");
        fputs(str, file);
    }
    fclose(file);
    return 0;
}*/

//7.Write a C program which reads string from file.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    file = fopen("assignment_2_file.c", "r");
    char ch;
    ch = fgetc(file);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(file);
    }
    fclose(file);
    return 0;
}*/

//10.Write a C program to find out size of any file.
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    file = fopen("shuvo.txt", "r");
    char ch;
    int cunt = 0;
    ch = fgetc(file);
    cunt++;
    while (ch != EOF)
    {
        ch = fgetc(file);
        cunt++;
    }
    printf("Size of file: %d\n", cunt);
    fclose(file);
    return 0;
}*/
