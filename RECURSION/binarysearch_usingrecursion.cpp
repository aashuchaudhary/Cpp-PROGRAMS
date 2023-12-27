#include <bits/stdc++.h>
using namespace std;
bool Binarysearch(int arr[], int start, int end, int X)
{
    // Base Condition
    if (start > end)
        return 0;

    int mid = start + (end - start) / 2;
    if (arr[mid] == X)
        return 1;
    else if (arr[mid] < X)

        return Binarysearch(arr, mid + 1, end, X);
    else
       return  Binarysearch(arr, start, mid - 1, X);
}
int main()
{
    int arr[] = {2,4,6,8,10,12};
    int X = 12;
    cout << Binarysearch(arr, 0,5,X) << endl;
}