#include <stdio.h>
    void main()
    {
        int minute,hour,minu;
      scanf("%d",&minute);
      hour=minute/60;
      minu=minute%60;
      printf("%d %d",hour,minu);
    }
