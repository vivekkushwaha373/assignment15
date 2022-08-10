#include<stdio.h>
int greatest(int []);
int greatest(int arr[])
{
    int s=arr[0];
for(int i=0;i<10;i++)
{
if(s>arr[i])
{
  s=arr[i]; 
}

}
return s;
}

int main()
{
   int arr[10];
   printf("enter 10 numbers\n ");
   for(int i=0;i<10;i++)
   {
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
   }
//    greatest(arr);
   printf("the smallest number is %d",greatest(arr));
    return 0;
}