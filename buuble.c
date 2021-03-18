#include<stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void ordena(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
int main()
{
	int n,i;
	scanf("%i",&n);
	int vetor[n];
	for(i=0;i<n;i++)
	{
		scanf("%i",&vetor[i]);
	}
	printf("Antes:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
		if(i==n-1)
		{
			printf("\n");
		}
	}
	ordena(vetor,n);
	printf("Depois:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
	}
	return 0;
}
