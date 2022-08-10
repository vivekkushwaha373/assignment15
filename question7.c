#include<stdio.h>
int dublicate(int []);
int dublicate(int arr[])
{int count=0;
for(int i=0;i<9;i++)
{
    
    for(int j=i+1;j<10;j++)
        {if(arr[i]==arr[j])
        count++;
        }
    
}
return count;

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
printf("numner of dublicate occurence in the array is: %d",dublicate(arr));
    return 0;
}