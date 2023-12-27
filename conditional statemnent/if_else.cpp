// #include <iostream>
// using namespace std;
// int main()
// {
//     int package;
//     cout<<"Enter your Package: ";
//     cin >> package;
//     if (package > 15)
//     {
//         cout << "Accepted";
//     }
//     else
//     {
//         cout << "rejected";
//     }
// }

// on the basiss of percentage and marks say the student is pass or fail

// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter your marks: ";
//     cin>>marks;                    //cin means for entering
//     if(marks > 33)
//         cout<<"pass";
//     else
//         cout<<"fail";
// }

// Find a>b

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"enter number a & b\n";
//     if(a>b)
//     cout<<"yes";
//     else
//     cout<<"No";
// }

// find even or add

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter any number: ";
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "even";
//     }
//     else
//     {
//         cout << "odd";
//     }
// }

// OR,

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter any number: ";
//     cin >> n;
//     if (n % 2 == 1)
//     {
//         cout << "ODD";
//     }
//     else
//     {
//         cout << "EVEN";
//     }
// }

// WAP that the enteed age is adult child or  inavalid

// #include<iostream>
// using namespace std;
//   int main(){
//     int age;
//     cout<<"Enter any age: ";
//     cin>>age;
//     if(age<18){
//         cout<<"Teenager";
//     }
//     else if(age>18 && age< 50){
//     cout<<"Adult";
//     }
//     else{
//         cout<<"invalid age";
//     }
//   }

// wap that a number is +ve,-ve or 0.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     if (num > 0)
//         cout << "possitive";
//     else if (num == 0)
//         cout << "0";
//     else
//         cout << "Negative";
// }

// WAp of vowel or consonent

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout << "Enter the letter: ";
//     cin >> c;
//     if (c=='a')
//         cout << "Vowel";
//     else if (c=='e')
//         cout << "Vowel";
//     else if (c=='i')
//         cout << "Vowel";
//     else if (c=='o')
//         cout << "Vowel";
//     else if (c=='u')
//         cout << "Vowel";
//     else
//         cout << "consonent";
// }

// WAP to print Days

// #include<iostream>
// using namespace std;
//   int main(){
//     int n;
//     cout<<"Enter  the number: ";
//     cin>>n;
//     if(n==1)
//     cout<<"monday";
//     else if(n==2)
//     cout<<"Tuesday";
//     else if(n==3)
//     cout<<"Wednesday";
//     else if(n==4)
//     cout<<"Thrusday";
//     else if(n==5)
//     cout<<"Friday";
//     else if(n==6)
//     cout<<"Saturday";
//     else if(n==7)
//     cout<<"Sunday";
//   }
// else
// cout<<"Enter valid Day";

//---->It can be also done by switch case

// LOOP

// print n times appu kaise ho
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the number: ";
// cin>>n;
//  for(int i =1; i<=n ; i++){
//   cout<<"print App kaise ho\n";
//  }
// }

// print square of number

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the number: ";
// cin>>n;
//  for(int i =1; i<=n ; i++){
//   cout<<i*i<<endl;
//  }
// }

// print n natural number

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter the number: ";
//   cin>> n;
//   for (int i = 1; i <= n; i++)
//   {
//     cout << i <<" square is: "<<i*i<<endl;
//   }
// }

// print all n even number

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "enter the number : ";
//   cin >> n;
//   for (int i = 2; i <= 10; i = i + 2)
//   {
//     cout << i << endl;
//   }
// }

// print Even or odd

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "enter the number : ";
//   cin >> n;
//   for (int i = 1 ; i <= 10; i = i + i)
//   {
//     if(i%2==0)
//     cout << i <<" ";
//   }
// }

// print from 101 to 200

// #include <iostream>
// using namespace std;
// int main()
// {
//   int i;
//   for (i = 101; i <=200; i++)
//   cout << i << endl;
// }

// print A to Z

// #include<iostream>
// using namespace std;
// int main(){
// char name;
// for(name ='a' ; name <= 'z' ; name ++)
// cout<<name<<" ";
// }

// reversing the number

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, i;
//   cout<<"Enter the number: ";
//   cin >> n;
//   for (i = n; i >= 1; i--)
//     cout << i << endl;
// }

// print numbers 1 to hundred in series like 1,4,7,20.....

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, i;
//   cout<<"Enter the number: ";
//   cin >> n;
//   for (i =1; i <=100 ;i=i+3)
//     cout << i << endl;
// }

// print n table

// #include<iostream>
// using namespace std;
// int main(){
//   int i,n;
//   cout<<"Enter the table: ";
//   cin>>n;
//   for (i=1;i<=10;i++)
//   cout<<n*i<<endl;
//   cout<<n<<"*"<<i<<"="<<n*i<<endl;
// }

// calculate power of a number

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, pow,i ,num;
//   cout << "Enter the number and power: ";
//   cin >> n >> pow;
//   num = n;
//   for (i = 1; i < pow; i++)
//     num = num * n;
//     cout<<num;
// }

// sum of n natural number

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, i, sum = 0;
//   cout << "Enter the number: ";
//   cin >> n;
//   for (i = 1; i <= 6; i++)
//     sum = sum + i;
//   cout << sum;
// }

// or

// print sum of n natural numbers (without loop)

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, i, sum = 0;
//   cout << "Enter the number: ";
//   cin >> n;

//   cout << (n*(n+1)/2);
// }

// print sum of square of n natural numbers

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, i, sum = 0;
//   cout << "Enter the number: ";
//   cin >> n;
//   for (i = 1; i <= n; i++)
//     sum = sum + (i*i);
//   cout << sum;
// }

// wap a program of factorial

// #include <iostream>
// using namespace std;
// int main()
// {
//    int n, fact=1,i;
//   cout << "Enter the number: ";
//   cin >> n;
//   for (i = 1; i <= n; i++)
//     fact *= i;
//   cout << fact;
// }

// WAP of prme number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "Enter the number: ";
//     cin >> n;
//     if (n < 2)
//     {
//         cout << "Not Prime";
//         return 0;
//     }
//     else
//     {
//         for (i = 2; i < n; i += 1)
//         {
//             if (n % i == 0)
//             {
//                 cout << "Not a prime";
//                 return 0;
//             }
//         }
//         cout << "Prime";
//     }
// }

// WAP of fabbonaci series

// here p is previous, c is current , l is last  and fabo seies starts from 0 or 1 and  if having any difficulty then refer notes.

// #include<iostream>
// using namespace std;
// int main(){
//     int n,l=0,p=1,c,i;
//     cout<<"enter the number: ";
//     cin>>n;
//     cout<<"Fabonacci Series: "<<endl;
//     cout<<l<<" "<<p<<" ";  //print first two number
//     for(i=2;i<=n;i++){
//         c=p+l;
//         cout<<c<<" ";
//         l=p;
//         p=c;
//     }
//         cout<<endl;
// }

// pattern 1 printing

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << "*"
//                  << " ";
//         }
//         cout << endl;
//     }
// }

// printing pattern 2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 4; row = row + 1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << "10 ";
//         }
//         cout << endl;
//     }
// }

// pattern printing 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row = row +1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << row << " ";
//         }
//         cout << endl;
//     }
// }

// pattern 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row = row +1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// PATTERN 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row = row +1)
//     {
//         for (col = 5; col >=1 ; col --)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// PATTERN 6

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << col * col << " ";
//         }
//         cout << endl;
//     }
// }

// pattern 7

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << col * col *col << " ";
//         }
//         cout << endl;
//     }
// }

// pattern 8

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row ++)
//     {
//         char name = 'a' + row - 1;
//         for (col = 1; col <= 5; col++)
//         {
//             cout <<name<< " ";
//         }
//         cout << endl;
//     }
// }

// pattern 9

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row ++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//         char name = 'a' + col - 1;
//             cout <<name<< " ";
//         }
//         cout << endl;
//     }
// }

// OR

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row ++)
//     {
//         for (char col = 'a'; col <= 'e'; col++)
//         {
//             cout <<col<< " ";
//         }
//         cout << endl;
//     }
// }

// pattern 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, count=1 ;

//     for (row = 1; row <= 5; row ++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout <<count<< " ";
//             count=count+1;
//         }
//         cout << endl;
//     }
// }

// or

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 1; row <= 5; row ++)
//     {
//         for(col = 1; col <= 5; col++)
//         {
//           cout<<(row-1)*5+col<<" ";
//         }
//         cout << endl;
//     }
// }

// PATTERN 11

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 1; row <= 5; row ++)
//     {
//         for ( col = 1; col <= row; col++)
//         {
//           cout<<"*"<<" ";
//         }
//         cout << endl;
//     }
// }

// pattern 12

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 1; row <= 5; row ++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//           cout<<col<<" ";
//         }
//         cout << endl;
//     }
// }

// pattern 13

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 1; row <= 5; row ++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//           cout<<row<<" ";
//         }
//         cout << endl;
//     }
// }

// pattern 14

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row ++)
//     {
//         char name = 'a' + row - 1;
//         for (col = 1; col <= row; col++)
//         {
//             cout <<name<< " ";
//         }
//         cout << endl;
//     }
// }

// OR

// same ques but in this we initialise number by user

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << (char)('a' + i - 1) << " ";
//         }
//         cout << endl;
//     }

// different logic but having doubt
// _____________++++++====
// _____________++++++====    doubt

// #include <iostream>
// using namespace std;
// int main()
// {
//     int  row;
//     for (row = 1; row <= 5; row ++)
// {
//         for (char col = 'a'; col <='e' ; col--)
//         {
//             cout <<col<< " ";
//         }
//         cout << endl;
//     }
// }

// pattern 15

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 5; row >=1; row --)
//     {
//         for (col = 1 ; col<=row; col++)
//         {
//           cout<<"* ";
//         }
//         cout << endl;
//     }
// }

// or

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 1; row <= 5; row ++)
//     {
//         for (col = 1 ; col<=5-(row-1) ; col++)
//         {
//           cout<<"* ";
//         }
//         cout << endl;
//     }
// }

//   pattern 16

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 1; row <= 5; row ++)
//     {
//         for (col = 1 ; col<=5-(row-1) ; col++)
//         {
//           cout<<col;
//         }
//         cout << endl;
//     }
// }

// or

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col ;

//     for (row = 5; row >=1; row --)
//     {
//         for (col = 1 ; col<=row ; col++)
//         {
//           cout<<col<<" ";
//         }
//         cout << endl;
//     }
// }

// PATTERN 17

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 5; col >= 5 - (row - 1); col--)
//         {
//             cout << col<<" ";
//         }
//         cout << endl;
//     }
// }

// hard pattern (bole to advanced)

// pattern 18

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for (row = 1; row <= n; row++)
//     {
//      //space print
//         for (col = 1; col <= n-row; col++)
//         {
//             cout<<"  ";
//         }
//         //star print
//             for(col=1;col<=row;col++){

//             cout <<"* ";
//             }
//             cout<<endl;
//     }
// }

// PATTERN 19

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for (row = 1; row <= n; row++)
//     {
//      //space print
//         for (col = 1; col <= n-row; col++)
//         {
//             cout<<"  ";
//         }
//         //star print
//             for(col=1;col<=row;col++){

//             cout <<row<<" ";
//             }
//             cout<<endl;
//     }
// }

//  PATTERN 20

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (row = 1; row <= n; row++)
//     {
//         // space printing
//         for (col = 1; col <= n - row; col++)
//         {
//             cout << "  ";
//         }
//         // number print
//         for (col = 1; col <= row; col++)
//         {
//             cout <<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// pattern 21 (character)

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//         // print spacing
//         for (col=1;col<=n-row;col++){
//             cout<<"  ";
//         }
//         // print character
//         for(char name='A';name<='A'+row-1;name++){
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

// or

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//         // print spacing
//         for (col=1;col<=n-row;col++){
//             cout<<"  ";
//         }
//         // print character
//         for(col=1;col<=row;col++){
//             char name='A'+row-1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

// pattern 22 (important ques)

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//         // print spacing
//         for (col=1;col<=n-row;col++){
//             cout<<"  ";
//         }
//         // print number
//         for(col=row;col>=1;col--){

//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// PATTEN 23 (PYRAMIND ) MOST IMPORTANT  QUES

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//         // print spacing
//         for (col=1;col<=n-row;col++){
//             cout<<"  ";
//         }
//         // print star(*)
//         for(col=1;col<=(2*row-1);col++){

//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// pattern 24(IMPORTANT)

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row++){
//         // print spacing
//         for (col=1;col<=n-row;col++){
//             cout<<"  ";
//         }
//         // print number  1 TO ROW
//         for(col=1;col<=row;col++){
//             cout<<col<<" ";
//         }
//          //print row-1 to 1
//         for(col=row-1;col>=1;col--)
//         cout<<col<<" ";
//         cout<<endl;
//     }
// }

// PATTERN 25(IMPORTANT)

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row,col,n;
//   cout<<"Enter the number: ";
//   cin>>n;
//   for(row=n;row>=1;row--){
//     //space
//     for(col=1;col<=n-row;col++)
//     //pattern print
//     cout<<"  ";
//     for(col=1;col<=2*row-1;col++)
//     cout<<"*"<<" ";
//   cout<<endl;
//   }
// }

// pattern 26(VERY-IMPORTANT )

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, n;
//     cout << "Enter the number: ";
//     cin >> n;
// for(row=n;row>=1;row--){

//     //print *

//     for(col=1;col<=row;col++)
//     cout<<"* ";

//     // print space

//     for(col=1;col<=2*n-2*row;col++)
//     cout<<"  ";

//     //print pattern
//     for(col=1;col<=row;col++)
//     cout<<"* ";
//     cout<<endl;
// }

// for(row=1;row<=n;row++){

//     //print *

//     for(col=1;col<=row;col++)
//     cout<<"* ";

//     // print space

//     for(col=1;col<=2*n-2*row;col++)
//     cout<<"  ";

//     //print pattern
//     for(col=1;col<=row;col++)
//     cout<<"* ";
//     cout<<endl;

// }
// }

//PATTERN -27(VERY -IMPORTANT)--BUTTERFLY 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for(row=1;row<=n;row++){
//         //print star (*)
//         for(col=1;col<=row;col++)
//         cout<<"* ";

//         //print space
//         for(col=1;col<=2*n-2*row;col++)
//         cout<<"  ";

//         //print pattern 
//         for(col=1;col<=row;col++)
//         cout<<"* ";
//     cout<<endl;
//     }


//     for(row=n-1;row>=1;row--){
//         //print star (*)
//         for(col=1;col<=row;col++)
//         cout<<"* ";

//         //print space
//         for(col=1;col<=2*n-2*row;col++)
//         cout<<"  ";

//         //print pattern 
//         for(col=1;col<=row;col++)
//         cout<<"* ";
//     cout<<endl;
//     }
// }


// PATTRN 28(DIAMOND)

// #include<iostream>
// using namespace std;
// int main(){
//     int row,col,n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row++)
//     {
//         for(col=1;col<=n-row;col++)
//         cout<<" ";   //note:yha single space rakhenge
//         for (col=1;col<=row;col++)
//         cout<<"* ";
//         cout<<endl;
//     }
//     for(row=n-1;row>=1;row--)
//     {
//         for(col=1;col<=n-row;col++)
//         cout<<" ";   //note:yha single space rakhenge
//         for (col=1;col<=row;col++)
//         cout<<"* ";
//         cout<<endl;
//     }
// }

