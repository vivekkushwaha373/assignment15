#include<stdio.h>
void swap(int*,int*);
int * greatest(int []);
int * greatest(int arr[])
{
  int temp;
for(int i=0;i<10;i++)
{
for(int j=i+1;j<10;j++)
if(arr[i]>arr[j])
{
    swap(&arr[i],&arr[j]);

}

}

return arr;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
   int arr[10],*ptr;
   printf("enter 10 numbers\n ");
   for(int i=0;i<10;i++)
   {
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
   }
   ptr=greatest(arr);
   printf("sorted array is: ");
   for(int i=0;i<10;i++)
   {
     printf("%d ",ptr[i]);
   }
    return 0;
}