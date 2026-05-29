#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr=(int*)malloc(3*sizeof(int));

    printf("Enter 3 elements:\n");

    for(int i=0;i<3;i++)
    {
        scanf("%d",&ptr[i]);
    }

    ptr=(int*)realloc(ptr,5*sizeof(int));

    printf("Enter 2 more elements:\n");

    for(int i=3;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\nAll elements:\n");

    for(int i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }

    free(ptr);

    return 0;
}
