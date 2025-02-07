#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)  // Loop through the array
    {
        int mini = i;  // Assume the first unsorted element is the smallest
        for (int j = i + 1; j < n; j++)  // Find the minimum in the unsorted part
        {
            if (arr[j] < arr[mini])  
            {
                mini = j;  // Update index of the minimum element
            }
        }
        swap(arr[mini], arr[i]);  // Swap the found minimum element with the first unsorted element
    }

    cout << "After selection sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  // Print sorted array
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 5, 1, -3, 8, 6};  // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    
    cout << "Before selection sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  // Print original array
    }
    cout << endl;

    selectionsort(arr, n);  // Call the selection sort function
}
