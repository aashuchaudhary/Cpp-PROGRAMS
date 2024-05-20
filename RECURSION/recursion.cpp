
// IMPLEMENTATION

/* #include<iostream>
using namespace std;
int main()
{
    int n=5;
    // Iterative Approach
    for(int i=n;i>0;i--)
    {
        cout<<i<<" Days left for birthday\n";
    }
    cout<<"HAppy birthday\n";
}  */

/* // Using  Approch


#include<bits/stdc++.h>
using namespace std;
void fun3(int n)
{
        cout<<n<<" Days left for birthday\n";

}
void fun2(int n)
{
        cout<<n<<" Days left for birthday\n";

}
void fun1(int n)
{
        cout<<n<<" Days left for birthday\n";

}
void fun0(int n)
{
        cout<<" Happy birthday\n";

}

int main()
{
    int n=3;
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
} */

// Using Recurssion

/*
#include <bits/stdc++.h>
using namespace std;

// void fun0(int n)
// {
//         cout << "Happy birthday\n";
// }

// void fun1(int n)
// {
//         cout<<n<<" Days left for birthday\n";
//         fun0(n-1);
// }
// void fun2(int n)
// {
//         cout<<n<<" Days left for birthday\n";
//         fun1(n-1);
// }

// for removing fun2 and fun1 because it print same as the  fun 3 fot that we will change slightly the code of fun3 that it will call itself rather than fun 2 and fun 3.

void fun3(int n)
{
        // Base Case :it is used to terminate the recursion if we don't write base case then it will be infinite recursion.
        // Base Case
        if (n == 0)
        {
                cout << "Hapy Birthday\n";
        }

        //  if we dont't give base case then it will be stack overflow condition and it will occupy be-matlab ka storage.
        // Or iske karan loop  infinite time chlega or program Crash kar jyega

        cout << n << " Days left for birthday\n";
        // fun2(n-1);
        // after removing fun2 and fun1 we write
        fun3(n - 1);
}

int main()
{
        int n = 3;
        fun3(3);
}

*/
// STACK-OVERFLOW: ikse capacity s jyada dal dene se ho jta hai.
