/*#include <iostream>
using namespace std;

// function declare

int sum(int m, int n)
{
    int ans = m + n; // function define
    return ans;
}

// OR

void sum(int m, int n)
{
    int ans = m + n; // function define
    cout<<ans<<endl;
}

int mul(int m, int n)
{
    int ans = m * n;
    return ans;
}

void fun()
{
    cout << "hello world\n";
}

int main()
{
    int a, b;
    cout << "Enter Two  number: ";
    cin >> a >> b;

    // function call

    // cout<<sum(a,b);

    // OR
    int ans = sum(a, b);      //for int sum
    cout << ans;

    //OR

    sum(a,b);      //for void fun

    cout << endl;
    cout << mul(a, b);
    cout << endl;

    fun();
}*/

// PRIME NUMBER AND FACTORIAL

/*    #include <iostream>
using namespace std;
bool prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
        {
            return 0;
        }
    return 1;
}

// OR

// void prime(int n)
// {
//     if (n < 2)
//         {
//             cout<<0<<endl;
//             return;
//         }

//     for (int i = 2; i < n; i++)
//         if (n % i == 0)
//         {
//             cout<<0<<endl;
//             return ;
//         }
//         cout<<1<<endl;
//     return ;
// }

int fact(int n)
{
    int ans =1;
   for (int i =1; i<=n ;i++)
        ans*=i;
        return ans;


}

    int main()
    {
        int a, b;
        cout << "Enter your number: ";
        cin >> a >> b;

        // A is prime or not
        cout<<prime(a)<<endl;

        // OR,
        // prime(a);   //void wle ke liea esa hoga

        // A ka factorial
        cout<<fact(a)<<endl;

        // B is primr or not
        cout<<prime(b)<<endl;

        // OR,
        // prime(b);   //void wle ke liea esa hoga

        // B ka factorial
        cout<<fact(b)<<endl;

        // B-A ka prime
        cout<<prime(b-a)<<endl;

        // OR,
        // prime(b-a);   //void wle ke liea esa hoga

        // B-A ka factorial
        cout<<fact(b-a)<<endl;

    }*/

// PASS BY REFERENCE AND PASS BY VALUE

/*#include <iostream>
using namespace std;

void swap(int &a, int &b) { // pass by reference
    int c;
    c = a;
    b = a;
}

void swap(float &c, float &d){   //function overloading

    float r=c;
    c=d;
    d=r;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << " "<<endl;

    float f1=4.8 ,f2=3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2<<" ";
}*/

// questions

// CONVERT 'a' TO 'A'

/*#include <iostream>
using namespace std;

char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cin >> name;
    cout << convert(name)<<endl;
}*/

// ARMSTRONG NUMBER USING FUNCTION : (REVISE)  IMPORTANT QUESTION 

#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int n)
{
    int count =0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

// bool Armstrong (int num, int digit)
void Armstrong (int num, int digit)    //for void --> if we dont want to return
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem,digit); 
    }
    if (ans == num)
        // return 1;
        cout<<1;
    else
        // return 0;
        cout<<0;
}

int main()
{
    int num;
    cin >> num;

    // count digit
    int digit = countdigit(num);
    // Armstrong number
    // cout << Armstrong(num, digit); 

    // for void we take this
    Armstrong(num, digit);  
}
