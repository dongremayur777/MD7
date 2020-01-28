//GROUP 7
#include <stdio.h>
void selection_sort();
int a[30], n;
void main()
{
    int i;
    scanf("%d", &n);    
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    selection_sort();
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
   printf("\n");
}
void selection_sort()
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}