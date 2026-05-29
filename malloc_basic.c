#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr=(int*)malloc(sizeof(int));

    *ptr=50;

    printf("%d",*ptr);

    free(ptr);

    return 0;
}
