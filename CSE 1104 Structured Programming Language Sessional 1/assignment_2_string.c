//1. Write a C program to convert the string from upper case to lower case.
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[10000];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("%s\n",str);
    return 0;
}*/

//2. Write a C program to convert the string from lower case to upper case.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    printf("%s\n", str);
    return 0;
}*/

//3. Write a C program to delete the all consonants from given string.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            for (int j = i; j < strlen(str); j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("Rest Of the string is: %s", str);
    return 0;
}*/

//5. Write a C program to sort the characters of a string.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000], temp;
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s\n", str);
    return 0;
}*/

//6. Write a C program for concatenation two strings without using string.h header file.
/*#include<stdio.h>
int main(){
    char str1[1000],str2[10000];
    printf("Enter First String: ");
    gets(str1);
    printf("Enter Second String: ");
    gets(str2);
    int p=0;
    for(int i=0;str1[i]!='\0';i++)p++;
    for(int j=0;str2[j]!='\0';j++){
        str1[p]=str2[j];
        p++;
    }
    str1[p]='\0';
    printf("Answer: %s\n",str1);
    return 0;
}*/

//7. Write a C program to find the length of a string using pointer.
/*#include <stdio.h>
int main()
{
    char str[1000], *ptr;
    int i = 0;
    printf("Enter String: ");
    gets(str);
    ptr = str;
    while (*ptr != '\0')
    {
        i++;
        ptr++;
    }
    printf("Length: %d", i);
    return 0;
}*/

//8. Write a C program which prints initial of any name.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    printf("Enter your name: ");
    gets(str);
    int len = strlen(str);
    printf("%c", str[0]);
    for (int i = 1; i < len; i++)
    {
        if (str[i] == ' ')
            printf(".%c", str[i + 1]);
    }
    return 0;
}*/

// 9. Write a C program to print the string from given character.
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter character number: ");
    scanf("%d", &n);
    int p = 0;
    char ch, str[n];
    for (int i = 0; i < 2 * n; i++)
    {
        scanf("%c", &ch);
        str[p] = ch;
        p++;
    }
    printf("%s\n", str);
    return 0;
}*/

//10. Write a C program to reverse a string.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    printf("Enter a string: ");
    gets(str);
    printf("Reverse String: %s\n", strrev(str));
    return 0;
}*/

//11. Reverse a string using recursion in C.
/*#include <stdio.h>
void solve()
{
    char ch;
    scanf("%c", &ch);
    if (ch != '\n')
    {
        solve();
        printf("%c", ch);
    }
}
int main()
{
    printf("Enter a sentence: ");
    solve();
    return 0;
}*/

//12. String concatenation in C without using string.h.
/*#include <stdio.h>
int main()
{
    char str1[1000], str2[10000];
    printf("Enter First String: ");
    gets(str1);
    printf("Enter Second String: ");
    gets(str2);
    int p = 0;
    for (int i = 0; str1[i] != '\0'; i++)
        p++;
    for (int j = 0; str2[j] != '\0'; j++)
    {
        str1[p] = str2[j];
        p++;
    }
    str1[p] = '\0';
    printf("Answer: %s\n", str1);
    return 0;
}*/

//13. How to compare two string in C without using strcmp.
/*#include <stdio.h>
int main()
{
    char str1[10000], str2[10000];
    int len1 = 0, len2 = 0, i = 0, j = 0;
    printf("Enter First string : ");
    gets(str1);
    printf("Enter Second string :  ");
    gets(str2);
    while (str1[len1] != '\0')
        len1++;
    while (str1[len2] != '\0')
        len2++;
    if (len1 != len2)
        printf("This two string are NOT Equal.\n");
    else
    {
        for (i = 0; i < len1; i++)
            if (str1[i] == str2[i])
                j++;
        if (j == len1)
            printf("This two string are Equal.\n");
        else
            printf("This two string are NOT Equal.\n");
    }
    return 0;
}*/

//14. String copy without using strcpy in C .
/*#include <stdio.h>
int main()
{
    char str1[10000], str2[10000];
    printf("Enter a string: ");
    gets(str1);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("COPY: %s\n", str2);
    return 0;
}*/

//15. Convert a string to ASCII in C.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    printf("Enter a string : ");
    gets(str);
    int len = strlen(str), sum = 0;
    for (int i = 0; i < len; i++)
        sum += (int)str[i];
    printf("%d", sum);
    return 0;
}*/
