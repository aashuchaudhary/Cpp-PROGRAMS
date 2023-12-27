/* #include<iostream>
using namespace std;
void incr(int n)
{
    n++;
}
int main(){
    int num=10;
    int temp=num;
    incr(num);
    cout<<num

} */

// function using pointer;

/* #include<iostream>
using namespace std;
void incr(int *ptr){
    *ptr=*ptr+1;
}
int main(){
    int num=10;
    int temp=num;
    incr(&num);
    cout<<num;
} */

// //  swapping two numbers with array and function  with pointer

// #include <iostream>
// using namespace std;

// /* 20    10      //value
// first  second   //var name
// 500    1000    //address

// 500    1000   //value
// p1     p2 //var name
// 10     20   //address
//  */

// void swapping(int *p1, int *p2) // pass by pointer
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     cout << p1 << endl;
//     cout << p2 << endl;
//     cout << &p1 << endl;
//     cout << &p2 << endl;
// }
// int main()
// {
//     int first = 10;
//     int second = 20;
//     cout << &first << endl;
//     cout << &second << endl;
//     swapping(&first, &second);
//     cout << first << " " << second << endl;
// }

//SWAPPING NUMBER BY REFERENCE VARIABLE

#include<bits/stdc++.h>
using namespace std;
void swapping(int &p1,int &p2)  //pass by reference
{
    int temp=p1;
    p1=p2;
    p2=temp;
}
void pass(vector<int>&temp)
{
    for(int i=0;i<5;i++)
    temp[i]=20;
}
void dob(int p[])  //p[] or *p are same

{
    for(int i=0;i<5;i++)
    p[i]=p[i]*2;
}

// vector ,string  reference ki  help se pass kre
// int arr,char  pointer ki help se solve kre.
int main()
{
    // // reference variable
    // int num=10;
    // int &temp =num;  //num and temp are same
    // cout<<temp<<endl;
    // temp++;
    // cout<<num;
    // cout<<&temp<<endl;
    // cout<<&num;


    // int first=10,second=20;
    // swapping(first,second);
    // cout<<first<<" "<<second;

    // USing vector
    int arr[5]={1,2,3,4,5};
    dob(arr);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<"  ";
    vector<int>v(5,0);
    pass(v);
    for(int i=0;i<5;i++)
    cout<<v[i]<<" ";

}