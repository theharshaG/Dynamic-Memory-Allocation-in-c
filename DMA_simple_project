#include<stdio.h>
#include<stdlib.h>

int main()
{
    int user,sum=0;
    int *arr,i,highest;

    float average;

    printf("Enter number of users: ");
    scanf("%d",&user);

    arr=(int*)malloc(user*sizeof(int));

    if(arr==NULL)
    {
        printf("Memory not allocated");

        return 0;
    }

    printf("Enter array elements:\n");

    for(i=0;i<user;i++)
    {
        scanf("%d",&arr[i]);
    }

    highest=arr[0];

    for(i=0;i<user;i++)
    {
        sum+=arr[i];

        if(arr[i]>highest)
        {
            highest=arr[i];
        }
    }

    average=(float)sum/user;

    printf("\nSum=%d",sum);

    printf("\nAverage=%.2f",average);

    printf("\nHighest=%d",highest);

    free(arr);

    return 0;
}
