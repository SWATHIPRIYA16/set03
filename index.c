#include <stdio.h>
    void main()
    {
 
        int i,  n,number[n];
        scanf("%d", &n);
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &number[i]);
        }
        for (i = 0; i < n; ++i) 
        {
            printf("%d %d\n",number[i],i);
        }
    }
