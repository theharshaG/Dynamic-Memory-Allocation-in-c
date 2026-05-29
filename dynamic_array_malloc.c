#include<stdio.h> 
#include<stdlib.h>

int main()
{
    int n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation failed");

        return 0;
    }

    printf("Enter elements:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Array elements:\n");

    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }

    free(ptr);

    return 0;
}
