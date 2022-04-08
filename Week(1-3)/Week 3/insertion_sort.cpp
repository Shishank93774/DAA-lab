// Given an unsorted array of integers, write program to sort the array using insertion sort.
// program should be able to find number of comparisons and 
// shifts ( shifts total number of times the array elements are shifted from their place) required for sorting the array.

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    int count = 0;
    int shift = 0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            count++;
        }
        arr[j + 1] = key;
        shift++;
    }
    cout << "Number of comparisons: " << count << endl;
    cout << "Number of shifts: " << shift << endl;
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    return 0;
}
