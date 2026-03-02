#include<stdio.h>

int isPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;   // prime
}

void removePrime(int arr[], int n)
{
    int i, k=0;

    for(i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
        {
            for(k=i;k<n;k++)
            {
                arr[k]=arr[k+1];
            }
            n--;
        }
    }
     printf("After removing primes:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nNew size = %d", n);
}

int main()
{
    int arr[] = {4, 7, 10, 13, 16, 5};
    int n = 6;
    removePrime(arr, n);

   

    

    return 0;
}

