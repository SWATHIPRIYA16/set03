# include<studio.h>
void main()

{
       int i,array_length,n;
    int arr[array_length];
    int max=0;
 
    scanf("%d",&array_length);
   
   for(i=0;i<array_length;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<=array_length;i++)
   {
       if(max<=arr[i])
       {
           max=arr[i];
       }
   }
   printf("%d",max);
}
                  
