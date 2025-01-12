#include <stdio.h>

// Function Declaration
int BinarySearching(int arr[], int Find, int size);

int main()
{
    int size;

    printf("Enter the Size of the Array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the Elements in the Array :\n ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int Find;
    printf("Enter the Elements you Want to Search in the array : \t");
    scanf("%d ", &Find);
    int result = BinarySearching(arr, Find, size);

    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array.\n");
    }
    return 0;
}

// Function Declaration

int BinarySearching(int arr[], int Find, int size)
{
    int mid;
    int first = 0;
    int last = size - 1;
    while (first <= last)
    {

        mid = first + (last - first) / 2;

        if (arr[mid] == Find)
        {
            return mid;
        }
        if (arr[mid] < Find)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
}
