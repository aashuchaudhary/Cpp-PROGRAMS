
// POINTERS RELATIONSHIP WITH ARRAY

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr;
    int *ptr1 = arr + 1;
/*     // print the address of firt element or zero index
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << &arr[0] << endl;
    cout << ptr << endl;

    // print the address of second element or first index
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;
    cout << ptr1 << endl;

    // print the  value of zero index
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr + 0) << endl;
    cout << *ptr << endl;


    // print all address
    for(int i=0; i<5;i++)
        cout<<arr+i<<endl;

        // print all the values
    for(int i=0; i<5;i++)
        cout<<*(arr+i)<<endl; */



        // print all the values
        for(int i=0;i<5;i++)
        cout<<ptr[i]<<endl;

        // print all the address
        for(int i=0;i<5;i++)
        cout<<ptr+i<<endl;

       /*  // arithematic operation   ptr++,ptr--,ptr=ptr+1
        // print all the values
        // ptr++

        for(int i=0;i<5;i++)
        {

        cout<<*ptr<<" ";
        ptr++;
        }

        // ptr--
        for(int i=5;i>=0;i--)
        {

        cout<<*ptr<<" ";
        ptr--;
        } */

        // Addition
         ptr=ptr+3;
         cout<<*ptr<<endl;
         ptr=ptr-2;
         cout<<*ptr<<endl;
}
    