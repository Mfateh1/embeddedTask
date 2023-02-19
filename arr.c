#include <stdio.h>
int main()
{

    // creating array and the other variables:
    int arr[5] = {1, 2, 3, 4, 5};
    int i, sum, avg, length;
    length = sizeof(arr) / sizeof(arr[0]);

    // printing the elements in one single for loop:
    printf("The elements in the array are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }

    // calculating the sum and printing it then calculating the avg:
    for (i = 0, sum = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of the elements in the array is: %d \n", sum);
    avg = sum / length;
    printf("The average is: %d", avg);

    return 0;
}