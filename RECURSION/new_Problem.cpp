/* // FACTORIAL USING RECURSION 

#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // Base Case
    if(n==1 ||n==0)
    {
    return 1;
    }
    return n *fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0){
        cout<<"Factorial is not possible ";
        return;
    }
    cout<<fact(n);
} */

// SUN OF N NATURAL NUMBER
/* #include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    // Base Case
    if(n==1)
    {
    return 1;
    }
    return n +sum(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<sum(n)<<endl;
}  */

// POWER OF 2

/* #include<bits/stdc++.h>
using namespace std;
int pow(int num,int n)
{
    // Base Case
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
    return num;
    }
    return num *pow(num,n-1);
}
int main()
{
    int num,n;
  
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>n;
    cout<<pow(num,n)<<endl;
}  */

// SUM OF SQUARE OF N NUMBER

/* #include<bits/stdc++.h>
using namespace std;
int sqsum(int n)
{
    // Base Case
    if(n==1)
    {
    return 1;
    }
    return n*n+sqsum(n-1);
}
int main()
{
    int n;
  
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<sqsum(n)<<endl;
} */ 

