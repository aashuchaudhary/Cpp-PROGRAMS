#include <iostream>
using namespace std;
int main()
{
    int arr[6]={2,4,5,7,8,9};
    // int n;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // cout << "Enter the element: ";
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    int temp=arr[6-1];
    for(int i=6-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

}


// passing funcion to array



