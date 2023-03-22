
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void bubbleSort(int arr[], int x)
{
    int i, j, temp, swap;

    

	for(i = 0; i < x - 1; i++)
	{
        swap = 0;//set swap equal to 0 to count for each pass in the sort
		for(j = 0; j < x - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
                swap++;
			}
		}
     printf("Pass #%d: %d swaps\n", i+1, swap);//displaying the number of swaps in the specific iteration
	}
    	
}

void printArray(int arr[], int s)
{
    int i;
    for(i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
        
    }
    printf("\n");
}

int main(void){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n;

    n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sort: ");//Checking if array is recognized
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("After Sort: ");//Testing to make sure sort is working
    printArray(arr, n);
   

    return 0;
}
