// DOUBLE POINTER

/* #include<bits/stdc++.h>
using namespace std;

void fun(int *p1)
{
    *p1=*p1+5;
}
int main()
{
    int n=10;
    int *p=&n;
    fun(p);
    cout<<n;
} */

// if we do p1++ tand print p the we get output as 104 not as 15 because it is of int type pointer.

/* #include<bits/stdc++.h>
using namespace std;

void fun(int *p1)
{
    p1++;
}
int main()
{
    int n=10;
    int *p=&n;
    fun(p);
    cout<<p;
} */

// print same thing as above but now with uding double pointer

/* #include<bits/stdc++.h>
using namespace std;

void fun(int **p1){    //double pointer
    *p1=*p1+1;
}
int main()
{
    int n=10;
    int *p=&n;
    int **ptr=&p;
    fun(ptr);
    cout<<p;
} */

// TYPES OF POINTER

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n=10;
//     int *p=&n;  // single pointer
//     int **p2=&p;   //double pointer
//     int ***p3=&p2;    //triple pointer
//     int ****p4=&p3;    //four pointer
//     // cout<<p<<endl;
//     // cout<<&p<<endl;
//     // cout<<p2<<endl;
//     // cout<<&p2<<endl;
//     // cout<<p3<<endl;
//     // cout<<p4<<endl;

//     // value to modify  of n=10 tp 15.
//     *p=*p+5;
//     // or
//     **p2=**p2+5;
//     // or
//     ***p3=***p3+5;
//     cout<<n;
// }

// METHOD 2

#include <bits/stdc++.h>
using namespace std;

void fun(int *p){    //double pointer
    *p=*p+10;
}
int main()
{
    int n = 10;
    int *p = &n;   // single pointer
    int **p2 = &p; // double pointer

    fun(p);
    cout << *p << " ";
}
