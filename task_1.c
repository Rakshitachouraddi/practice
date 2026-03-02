
#include<stdio.h>
void rotateByleft(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
printf("After left rotation\n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
}
void rotateByright(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("After right rotation\n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
}

int main()
{
    int ch,n;
printf("enter the number of elements\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements\n");
for( int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the choice\n 1 for rotateByleft\n 2 for rotateByright\n ");
scanf("%d",&ch);
switch (ch)
{
    case 1 : rotateByleft(arr,n);
    break;
    case 2: rotateByright(arr,n);
    break;
    default : printf("Invalid entry");
    break;
}
return 0;
}
