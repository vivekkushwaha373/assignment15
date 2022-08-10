#include<stdio.h>
void reverse(int []);
void reverse(int arr[])
{
int reverse[10];
for(int i=0;i<10;i++)
{
    
   reverse[i]=arr[10-i-1];
    
}
printf("display array in revere order: ");
for(int i=0;i<10;i++)
{
    printf("%d ",reverse[i]);
}


}
int main()
{
int arr[10];
printf("enter the values\n ");
for(int i=0;i<10;i++)
{
    printf("enter the %d value: ",i+1);
    scanf("%d",&arr[i]);
}
reverse(arr);
    return 0;
}