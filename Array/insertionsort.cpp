
#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of an array: ";

    // for inserting elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // outer loop
    for (int i = 1; i < n; i++)
    {
        // inner loop
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
