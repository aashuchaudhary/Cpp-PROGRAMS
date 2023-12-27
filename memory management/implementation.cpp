#include <iostream>
using namespace std;

int main()
{
    // varriable ke liea memory allocation krna hai

    // yha pe memory allocate hoga dynamically heap ke ander
    // FOR INT
    int *ptr = new int;
    *ptr = 5; // assigining value
    cout << *ptr << endl;

    // FOR FLOAT
    float *ptr1 = new float;
    *ptr1 = 8.2;
    cout << *ptr1 << endl;
 
    // For Array
    int n;
    cout<<"Enter the size of Array: ";
    cin >> n;
    int *p = new int[n];

    // Giving value
    for(int i=0;i<n;i++)
    p[i]=i+1;

    // For print 
    for(int i=0;i<n;i++)
    cout<<p[i]<<endl;

    // Using Delete Keyword
     delete ptr;
     delete ptr1;
     delete p;
}