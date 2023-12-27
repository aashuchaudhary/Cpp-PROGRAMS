#include <iostream>
using namespace std;

int Binarysearch(int arr[], int n, int key)
{
    // start,end ,mid
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        // mid ko fianl karo
        mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        // arr[mid]<key
        else if (arr[mid] < key)
            start = mid + 1; 
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key: ";
    cin >> key;

    cout << Binarysearch(arr, n, key);
    return 0;
}