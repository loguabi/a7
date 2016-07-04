#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x, int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
void printArray(int arr[],int n)
{
for(i=0;i<n;i++)
printf("%d",arr[i]);
printf("\n");
}
void rendomixe(int arr[], int n)
{
srand(time(NULL));
for(int i=n-1;i>0;i--)
{
int j=rand() % (i+1)
swap(&arr[i],&arr[j]);
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
randomize(arr,n);
printfArray(arr,n);
return 0;
}
