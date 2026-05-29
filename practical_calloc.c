#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;

    // Allocate memory for 3 integers using calloc
    ptr = (int*)calloc(3, sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    // Input 3 values
    printf("Enter 3 elements:\n");

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Resize memory to 5 integers using realloc
    ptr = (int*)realloc(ptr, 5 * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory reallocation failed");
        return 0;
    }

    // Input 2 more values
    printf("Enter 2 more elements:\n");

    for(i = 3; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Print all elements
    printf("All elements are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Free memory
    free(ptr);

    return 0;
}
