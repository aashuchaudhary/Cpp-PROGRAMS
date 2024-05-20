/* // ------> starting from zero index so it take 3 arguments
// printing 3,7,6,2,8,7

#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int index,int n)
{
    if(index==n)
    {

    return;
    }

    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}
int main(){
    int arr[]={3,7,6,2,8,7};
    print(arr,0,5);
} */

/* // ------> starting from last index so it take 2 arguments
// printing 7,8,2,6,8,7

#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int index)
{
    if (index == -1)
    return;

    cout << arr[index] << " ";
    print(arr, index - 1);
}
int main()
{
    int arr[] = {3, 7, 6, 2, 8, 7};
    print(arr, 5);
} */

// reversing and printing ---> 3,7,6,2,8,7

/* #include<bits/stdc++.h>
using namespace std;
void print(int arr[],int index,int n)
{
    if(index==n)
    {

    return;
    }

    print(arr,index+1,n);
    cout<<arr[index]<<" ";
}
int main(){
    int arr[]={3,7,6,2,8,7};
    print(arr,0,5);
} */

/*
// in reverse
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int index,int n)
{
    if(index==n)
    {

    return;
    }

    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}
int main(){
    int arr[]={3,7,6,2,8,7};
    print(arr,0,5);
} */


// SUM OF ALL ELEMENTS

/* #include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int index)
{
    return arr[index];
}
int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    // iterative Approach
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += sum(arr,i);
    }
        cout << total;
} */


/* // --->recursive method

#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int index,int n)
{
    if(index==n)
    return 0;
    return arr[index]+sum(arr,index+1,n);
}
int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    // Recursive Approach
    int total = 0;
    cout<<sum(arr,0,5)<<endl;
}
    */



// Find Minimum Element

// Recursive method

// #include <bits/stdc++.h>
// using namespace std;
// int minelement(int arr[],int index,int n)
// {
//     if(index==n-1)
//     return arr[index]; 
//     return min(arr[index],minelement(arr,index+1,n));
// }
// int main()
// {
//     int arr[]={3,4,1,2,8};
//     cout<<minelement(arr,0,5);
// }



/* // iterative method

#include <bits/stdc++.h>
using namespace std;
int minelement(int arr[],int index)
{
    return arr[index];
}
int main()
{
    int arr[]={3,4,1,2,8};
    int num=arr[0];
    for(int i=0;i<5;i++)
    {
        num=min(num,minelement(arr,i));
    }
    cout<<num<<endl;
} */