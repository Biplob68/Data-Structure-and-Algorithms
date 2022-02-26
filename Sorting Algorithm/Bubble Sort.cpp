#include<stdio.h>

// Bubble sort algorithm
void bubble_sort(int arra[], int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arra[j] > arra[j+1])
            {
                temp = arra[j+1];
                arra[j+1] = arra[j];
                arra[j] = temp;
            }
        }
    }
}


int main()
{
    int arra[] = {1,5,6,12,9,10,3};
    bubble_sort(arra, 7);

    for(int i=0; i<7; i++){
        printf("%d ", arra[i]);
    }
    printf("\n");
    return 0;
}


// Time complexity : O(n^2) - Average case & Worst Case, O(n) - Best Case -> When the array is already sorted..
// Space Complexity : O(1) - One array is given , no need to extra space



// Optimized version

void bubbleSort(int arr[], int n){
    int i, j, temp, flag=0;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            
            if( arr[j] > arr[j+1]){
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // if swapping happens update flag to 1
                flag = 1;
            } 
        }
        // if value of flag is zero after all the iterations of inner loop
        // then break out
        if(flag==0)
        {
            break;
        }
    }
}
