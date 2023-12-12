/*
Name : Varsha Thomas
Class : CS3B

To perform insertion sort.
*/

#include <stdio.h>

int i, size, arr[10];

void Insert()
{
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    } 
}

void Display()
{
    printf("Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void Sort()
{
    int v, j;
    i = 1;
    while (i < size)
    {
        v = arr[i];
        j = i;
        while (arr[j -1] > v && j > 0)
        {
            arr[j] = arr[j - 1];
            j = j - 1;
        }
        arr[j] = v;
        i = i + 1;
    }
}

void main()
{
    Insert();
    Display();
    Sort();
    Display();
}