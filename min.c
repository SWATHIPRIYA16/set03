#include <stdio.h>
void main()
{
    int N,i,temp;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<=N;i++)
    {
        if(temp>arr[i])
        {
            temp=arr[i];
        }
    }
    printf("%d",temp);
}
