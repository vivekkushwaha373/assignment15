#include<stdio.h>
void merge(int arr[],int ptr[])
{
int ntr[10];int temp;
for(int i=0;i<5;i++)
{
    ntr[i]=arr[i];
    ntr[i+5]=ptr[i];
}
for(int i=0;i<10;i++)
{
    for(int j=i+1;j<10;j++)
    {
      if(ntr[i]<ntr[j])
      {
        temp=ntr[i];
        ntr[i]=ntr[j];
        ntr[j]=temp;
      }

    }
}
    printf("array in descending order\n");
    for(int i=0;i<10;i++)
    {
      printf("%d ",ntr[i]);
    }
}

int main()
{
   int arr[5],ptr[5];
   printf("array num 1 \n");
   for(int i=0;i<5;i++)
   {
   printf("enter %d value: ",i+1);
   scanf("%d",&arr[i]);
   }
   printf("array num 2 \n");
     for(int i=0;i<5;i++)
   {
   printf("enter %d value: ",i+1);
   scanf("%d",&ptr[i]);
   }
   merge(arr,ptr);
    return 0;
}