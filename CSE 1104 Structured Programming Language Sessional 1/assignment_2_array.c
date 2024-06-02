/*.............10. Array:..................*/

//1.Write a C program to find out largest element of an array.
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], larg;
    printf("Enter array element: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    larg = arr[0];
    for (int i = 1; i < n; i++)
        if (larg < arr[i])
            larg = arr[i];
    printf("Largest element is: %d\n", larg);
    return 0;
}*/

//2. Write a C program to find out second largest element of an unsorted array.
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],larg,sl;
    printf("Enter array element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    larg=arr[0];
    for(int i=0;i<n;i++)
        if(larg<arr[i])larg=arr[i];
    if(arr[0]!=larg)sl=arr[0];
    else sl=arr[1];
    for(int i=0;i<n;i++)
        if(arr[i]!=larg && sl<arr[i])sl=arr[i];
    printf("Second largest element of an array: %d\n",sl);
    return 0;
}*/

//3. Write a C program to find out second smallest element of an unsorted array.
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], sl, ans;
    printf("Enter array element: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sl = arr[0];
    for (int i = 0; i < n; i++)
        if (sl > arr[i])
            sl = arr[i];
    if (arr[0] != sl)
        ans = arr[0];
    else
        ans = arr[1];
    for (int i = 0; i < n; i++)
        if (sl == arr[i])
            break;
        else if (ans > arr[i])
            ans = arr[i];
    printf("Second smallest element of an array: %d\n", ans);
    return 0;
}*/

//4. Write a C program to find which deletes the duplicate element of an array.
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],posi;
    printf("Enter array element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            for(int k=j;k<n-1;k++){
                arr[k]=arr[k+1];
            }
            n--;
            j--;
        }
        }
    }
    printf("The result is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}*/

//5. Write a C program for delete an element at desired position in an array.
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],posi;
    printf("Enter array element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the position to delete the element: ");
    scanf("%d",&posi);
    for(int i=posi-1;i<n-1;i++)
        arr[i]=arr[i+1];
    printf("The result is:\n");
    for(int i=0;i<n-1;i++)
        printf("%d\t",arr[i]);
    return 0;
}*/

//6. Write a C program for insert an element at desired position in an array.
/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], posi, value;
    printf("Enter array element: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the position to inset the element: ");
    scanf("%d", &posi);
    printf("Enter the value: ");
    scanf("%d", &value);
    for (int i = n - 1; i >= posi - 1; i--)
        arr[i + 1] = arr[i];
    arr[posi - 1] = value;
    printf("The result is:\n");
    for (int i = 0; i < n + 1; i++)
        printf("%d\t", arr[i]);
    return 0;
}*/

//7. C program to find largest and smallest number in an array.
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],max,min;
    printf("Enter array element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    printf("Largest and smallest number in an array are: %d\t%d\n",max,min);
    return 0;
}*/