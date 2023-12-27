#include <iostream>
using namespace std;
int main()
{
    /*     char arr[5] = "1234";
        char *ptr = arr;
        // here value of arr is printed
        cout << arr << endl;
        cout << ptr << endl;
        // here addresss of arr is printed
        cout <<(void*) arr << endl;
        cout <<(void*) ptr << endl; */
    // char name = 'a';
    // char *ptr = &name;
    // cout << ptr;

    // pointer with caharacter
    char arr[5] = "1234";
    char *ptr = arr;
    // cout << (void *)arr << endl;
    // or
    cout << static_cast<void *>[arr] << endl;
    cout << (void *)ptr << endl;
    char name = 'a';
    char *ptr1 = &name;
    cout << (void *)&name << endl;
    cout << (void *)ptr1;
}