
/* // print N to 1

#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
        // Base Case
        if(n==1)
        {
                cout<<1<<endl;
                return;
        }
        cout<<n<<endl;
        print(n-1);
}
int main()
{
        // Normal Method

        int n = 5;
        // for (int i = n; i > 0; i--)
        //         cout << i << endl;

       //Using Recursion
       print(n);
} */





// print even number N to 1

/* #include <bits/stdc++.h>
using namespace std;
void print(int n)
{
        // Base Case
        if(n==2)
        {
                cout<<2<<endl;
                return;
        }
        cout<<n<<endl;
        print(n-2);
}
int main()
{
       //Using Recursion
        int n=10;
       print(n);
} */






/* // Print number from 1 to N
#include<bits/stdc++.h>
using namespace std;
void print(int num,int N)  //two Argument is used
{
    // BAse Case
    if(num==N)
    {
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main()
{
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    print(1,N);
} */

// OR

/* // Print number from 1 to N
#include <bits/stdc++.h>
using namespace std;
void print(int N) // Single Argument is used
{
    // BAse Case
    if (N == 1)
    {
        cout << 1 << endl;
        return;
    }
    print(N - 1);
    cout << N << endl;
}
int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;
    print(N);
} */







// Print number from 1 to N(Even Number)

/* #include <bits/stdc++.h>
using namespace std;
void printEven(int num,int N) // Single Argument is used
{
    // Base Case
    if (num == N)
    {
        cout << num<< endl;
        return;  
    }
    cout << num << endl;
    printEven(num+2,N);
}
int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;
    // if(N%2==1)
    // {
    //     N--;
    // } 
    printEven(2,N);
} */


/* #include <bits/stdc++.h>
using namespace std;
void printEven(int N) // Single Argument is used
{
    // Base Case 
    if(N==2)
    {
        cout<<2<<endl;
        return;
    }
    
    printEven(N-2);
    cout << N << endl;
}
int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;
    if(N%2==1)
    {
        N--;
    } 
    printEven(N);
} */

// OR

/* // Print number from 1 to N(Even Number)

#include <bits/stdc++.h>
using namespace std;
void printEven(int num,int N) // double Argument is used
{
    // Base Case
    if (num>N)
    {
        
        return;  
    }
    cout << num << endl;
    printEven(num + 2,N);
}
int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;
    printEven(2,N);
} */


 
// Print number from 1 to N (Odd Number )
