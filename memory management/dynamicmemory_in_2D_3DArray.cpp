// 2D ARRAY

/* #include<iostream>
using namespace std;
int main(){
    // Array crate jo address store kare
    int n,m;
    cin>>n>>m;  //n=rows,m=cols

    // create 1D Array to store  uske address ko store karna hai es pointer wle mai
    int **ptr = new int*[n];

    // create 2D Array
    for(int i=0;i<n;i++)
    {

    ptr[i]=new int[m];
    }

    // fillig values in 2D Array
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ptr[i][j];
        }
    }

    // printing Values
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ptr[i][j]<<" ";
            cout<<endl;
        }
    }

    // for releasing memory

    for(int i=0;i<n;i++)

    {
        delete[] ptr[i];
    }
    delete[]ptr;
} */

// 3D ARRAY

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int L, B, H;
    cin >> L, B, H;

    //    Creating a 1D array which stores Address
    int ***ptr = new int **[L];
    // Create 2D array and stores   its address in ptr
    for(int i=0;i<L;i++) 
    {
         ptr[i]=new int *[B];
         for(int j=0;j<B;j++)
         {
            ptr[i][j]=new int [H];
         }
    }
    // for inserting Value
    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;j<H;k++)
    ptr[i][j][k]=i+j+k;

    // printing VAlue

    for(int i=0;i<L;i++)
    for(int j=0;j<B;j++)
    for(int k=0;j<H;k++)
    cout<<ptr[i][j][k]<<" ";
}