// USING ITERATION

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = n; i > 0; i--){
//         cout<< i << " Days left for Birthday";
//         cout << endl;
//     }
//     cout << "Happy BirthDay";
// }

// USING fUNCTION

// #include <bits/stdc++.h>
// using namespace std;
// void fun3(int n){
//     cout << n << " Days left in birthday\n";

// }
// void fun2(int n){
//     cout << n << " Days left in birthday\n";

// }
// void fun1(int n){
//     cout << n << " Days left in birthday\n";

// }
// void fun0(int n){
//     cout<< " Happy birthday";
// }
// int main(){
//     int n = 3;
//     fun3(3);
//     fun2(2);
//     fun1(1);
//     fun0(0);
// }

// USING SINGLE FUNCTION

// #include <bits/stdc++.h>
// using namespace std;

// void fun3(int n); // Forward declaration for fun3
// void fun2(int n); // Forward declaration for fun2
// void fun1(int n); // Forward declaration for fun1
// void fun0(int n); // Forward declaration for fun0

// void fun3(int n){
//     cout << n << " Days left in birthday\n";
//     fun2(n - 1);
// }
// void fun2(int n){
//     cout << n << " Days left in birthday\n";
//     fun1(n - 1);

// }
// void fun1(int n){
//     cout << n << " Days left in birthday\n";
//     fun0(n - 1);

// }
// void fun0(int n){
//     cout<< " Happy birthday";
// }
// int main(){
//     int n = 3;
//     fun3(3);

// }

// USING RECCURSION

// #include <iostream>
// using namespace std;

// void fun0(int n)
// {
//         cout << " Happy birthday\n";
// }

// void fun1(int n)
// {
//         cout<<n<<" Days left for birthday\n"<<endl;
//         fun0(n-1);
// }
// void fun2(int n)
// {
//         cout<<n<<" Days left for birthday\n"<<endl;
//         fun1(n-1);
// }
// void fun3(int n){
//     // Base Case
//     if(n == 0){
//         cout << " Happy Birthday";
//         return;
//     }
//     cout<< n << " Days left for birthday"<<endl;
//     fun3(n - 1);
// }
// int main(){
//     int n = 3;
//     fun3(3);

// }

// PRINT N TO 1 times happ birthday

// #include<iostream>
//  using namespace std;
//  void print(int n){
//   //Base Case
//     if (n == 0){
//         cout << " Happy birthday " << endl;
//         return;
//     }
//     cout<<n << " Days Left for birthday\n";
//     print(n - 1);
// }
// int main(){
//     int n = 5;
//     print(n);
//     return 0;
// }

// ONLY PRINT N TO 1

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n == 1){
//         cout<<1 ;
//         return;
//     }
//     cout << n << endl;
//     print(n - 1);
// }
// int main(){
//     int n = 5;
//     print(n);
//     // // General Approach
//     // for (int i = n; i > 0;i--){
//     //     cout<<i << " Days Left for BirthDay\n";
//     // }
// }

// PRINT N TO 1 (EVEN NO.)

// #include<iostream>
// using namespace std;
// void print(int n){
//     // Base condition
//     if(n == 2){
//         cout << 2 << endl;
//         return;
//     }
//     cout << n << endl;
//     print(n - 2);
//     return;
// }
// int  main(){
//     int n = 10;
//     print(n);
// }

// PRINT 1 TO N

// #include<iostream>
// using namespace std;
// void print(int num, int n){
//     if(num == n){
//         cout << num << endl;
//         return;
//     }
//     cout << num << endl;
//     print(num + 1, n);
// }
// int main(){
//     int n = 5;
//     print(1, n);
// }

// METHDOED 2: USING SINGLE Arguent

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n == 1){
//         cout << 1 << endl;
//         return;
//     }
//     print(n-1);
//     cout << n << endl;
// }
// int main(){
//     int n = 5;
//     print(n);
// }

// PRINT 1 TO N (EVEN NUMBER)

// #include<iostream>
// using namespace std;
// void printEven(int n){
//     if( n == 2){

//         cout << n << endl;
//         return;
//     }
//     printEven(n - 2);
//     cout << n << endl;
// }
// int main(){
//     int n = 10;
//     printEven(n);
// }

// OR :METHOD 2

// #include<iostream>
// using namespace std;
// void printEven(int num,int n){
//     if(num > n)
//     {
//         cout << num << " ";
//         return;
//     }
//     if(num % 2 == 0){

//     cout << num<< endl;
//     }
//     printEven(num+1, n);
//     // printEven(num+2, n);
// }
// int main(){
//     int n = 9;
//     printEven(1,n);
//     // printEven(2,n);
// }

// PRINT 1 TO N (ODD NUMBER)

// #include <iostream>
// using namespace std;
// void printOdd(int n)
// {
//     if (n < 1)
//     {
//         return ;
//     }
//     if (n % 2 == 1)
//     {
//         cout << n << endl;

//     }

//     printOdd(n - 1);
// }
// int main()
// {
//     int n = 10;

//     printOdd(n);
// }

// FACTORIAL : N * (N-1) * (N-2)...........

// #include<iostream>
// using namespace std;
// int fact(int n){
//     // Base case
//     if(n == 1){
//         return 1;
//     }
//     return n * fact(n - 1);
// }
// int main(){
//     int n = 6;
//     if (n < 0)
//     {
//         cout << "Factorial is not possible ";
//         return;
//     }
//     cout << fact(n);
// }

// Sum of n natural number

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n + sum(n - 1);
// }
// int main(){
//     int n = 3;
//     cout << sum(n);
// }

// Power Of 2

// #include <iostream>
// using namespace std;
// int pow(int num, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     if (n == 1)
//     {
//         return num;
//     }
//     return num * pow(num ,n- 1);
// }
// int main()
// {
//     int num, n;
//     cout << "Enter the  number : ";
//     cin >> num;
//     cout << "Enter the power: ";
//     cin >> n;
//     cout << pow(num, n);
// }

// Sum OF SQUARE OF n NUMBER

// #include<iostream>
// using namespace std;
// int sqnum(int n){
//     if(n == 1)
//         return 1;
//     return n*n + sqnum(n - 1);
// }
// int main(){
//     int n = 4;
//     cout << sqnum(n);
// }

// FABONACCI SERIES

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n == 0)
//         return 0;
//         if(n == 1)
//             return 1;

//         return fib(n - 1) + fib(n - 2);
// }
// int main(){
//     int n = 4;
//     cout << fib(n);
// }

// CLIMB N TH STAIRS (LEETCODE PROBLEMS ): SPECIALLY SOLVED WITH THE HELP OF  DYANAMOC PROGRAMMING.

// #include<iostream>
// using namespace std;
// int Totalways(int n){
//     if( n<= 1)
//         return n;
//     return Totalways(n - 1) + Totalways(n - 2);
// }
// int main(){
//     int n = 4;
//     cout << n << Totalways(n);
// }

// USING FOR LOOP

// #include<iostream>
// using namespace std;
// int Totalways(int n){
//     if( n <= 1)
//         return 1;

//         int prev = 1;
//         int curr = 1;

//         for (int i = 2; i < n; ++i){
//             int next = prev + curr;
//             prev = curr;
//             curr = next;

//         }
//         return curr;
// }
// int main(){
// int n = 4;
// cout << n<<endl;
// cout<< Totalways(n)<<endl;
// }

// GCD OF NUMBER
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int num = 10;
//     int num2 = 20;
//     cout << __gcd(num, num2);
// }

// OR

// #include <iostream>
// using namespace std;

// int gcd(int x, int y)
// {
//     if (y == 0)
//         return x;
//     return gcd(y, x % y);
// }

// int main()
// {
//     cout << "GCD of 48 and 18: " << gcd(48, 18) << endl;
//     return 0;
// }

// PRIMT ARRAY USING RECURSION

// #include <iostream>
// using namespace std;
// void print(int arr[], int index, int n)
// {
//     if (index == n)
//     {
//         return;
//     }
//     cout << arr[index] << endl;
//     print(arr, index + 1, n);
// }
// int main()
// {
//     int arr[] = {3, 4, 5, 6, 7};
//     print(arr, 0, 5);
// }

// REVERSING THE NUMBER

// #include <iostream>
// using namespace std;
// void print(int arr[], int index, int n)
// {
//     if (index == n)
//     {
//         return;
//     }
//     print(arr, index + 1, n);
//     cout << arr[index] << endl;
// }
// int main()
// {
//     int arr[] = {3, 4, 5, 6, 7};
//     print(arr, 0, 5);
// }

// Reverse using two

// #include <bits/stdc++.h>
// using namespace std;
// void print(int arr[], int index)
// {
//     if (index == -1)
//     {

//         return;
//     }

//     cout << arr[index] << " ";
//     print(arr, index - 1);
// }
// int main()
// {
//     int arr[] = {3, 7, 6, 2, 8, 7};
//     print(arr, 5);
// }

// reverse of above

// #include <bits/stdc++.h>
// using namespace std;
// void print(int arr[], int index)
// {
//     if (index == -1)
//     {

//         return;
//     }

//     cout << arr[index] << " ";
//     print(arr, index - 1);
// }
// int main()
// {
//     int arr[] = {3, 7, 6, 2, 8, 7};
//     print(arr, 5);
// }

// SUM OF ALL ELEMENTS (using recursion)

// USING RECURSION

// #include <iostream>
// using namespace std;
// int sum(int arr[], int index, int n)
// {
//     if (index == n)
//     {
//         return 0;
//     }
//     return arr[index] + sum(arr, index + 1, n);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int Total = 0;
//     cout << sum(arr, 0, 5);
// }

// (Using itteration ): BUT REMEMBER WE USE RECURSION TO SOLVE THE QUESTRION SO DON'T USE ITTERATION.

// #include<iostream>
// using namespace std;
// int sum(int arr[],int index){

//         return arr[index];

//     return arr[index] + sum(arr, index + 1);
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int Total = 0;
//     for (int i = 0; i < 5; i++){
//     Total += sum(arr,i);
//     }
//     cout << Total <<endl ;
// }

// SUM OF ALL ELEMENT FROMLAST NODE

// #include <iostream>
// using namespace std;

// int sum(int arr[], int index, int n)
// {
//     if (index == n - 1) // Corrected index condition
//     {
//         return arr[index];
//     }
//     return arr[index] + sum(arr, index + 1, n);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << sum(arr, 0, 5); // Store the sum in Total

// }

// FIND MIN ELEMENT IN THE GIVEN ARRAY

// #include <iostream>
// using namespace std;

// int minelement(int arr[], int index,int n){
//     if(index == n-1){
//         return arr[index];
//     }
//     return min(arr[index], minelement(arr, index + 1,n));
// }
// int main()
// {
//     int arr[] = {7, 2, 4, 1, 6};
//     cout << minelement(arr, 0, 5);
// }

// RECURSION USING STRING

// CHECK PALLINDROME

// #include <iostream>
// using namespace std;
// bool checkpal(string str, int start, int end)
// {
//     // base case
//     if (start >= end)
//         return 1;

//     // not matched
//     if (str[start] = str[end])
//         return 0;
//         // matched
//     return (str, start + 1, end - 1);
// }
// int main()
// {
//     string str = "naman";
//     cout<<checkpal(str, 0, 4);
// }

// count vowel

// #include <iostream>
// using namespace std;
// int vowel(string str, int index)
// {
//     // base case
//     if (index == -1)
//         return 0;

//     if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
//         return (1 + vowel(str, index - 1));

//     return vowel(str, index - 1);
// }
// int main()
// {
//     string str = "Dipu";
//     cout << vowel(str, 4);
// }

// REVERSE STRING

// #include<iostream>
// using namespace std;
// void Rev(string &str, int start, int end){
//     if(start >= end)
//         return;

//     //swapping

//     char c = str[start];
//     str[start] = str[end];
//     str[end] = c;

//     return Rev(str, start + 1, end - 1);
// }
// int main(){
//     string str = "Ashutosh";
//     Rev(str, 0, 8);
//     cout << str;
// }

// LOWER CASE TO UPPER CASE

// #include<iostream>
// using namespace std;
// void LowerToUpper(string &str, int index){
//     // base case
//     if(index == -1)
//         return;

//     str[index] = 'A' + str[index] - 'a' ;
//     LowerToUpper(str, index - 1);
// }
// int main(){
//     string str = "deepu";
//     LowerToUpper(str, 5);
//     cout << str;
// }

// LINEAR SEARCH / SEQUENTIAL SEARCH

// #include <iostream>
// using namespace std;
// bool LinearSearch(int arr[], int x, int index, int n)
// {
//     // base case

//     if (index == n)
//         return 0;

//     if (arr[index] == x)
//         return 1;

//     LinearSearch(arr, x, index + 1, n);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     cout << LinearSearch(arr, 8, 0, 10);
// }

// Binary Search

// #include <iostream>
// using namespace std;
// bool BinarySearch(int arr[], int start,int end,int X){
//     if(start > end){
//         return 0;
//     }
//     int mid = start + (end - start) / 2;
//     if(arr[mid] == X){
//         return 1;
//     }
//     else if(arr[mid] < X){
//         return BinarySearch(arr, mid + 1, end, X);

//     }
//     else
//         BinarySearch(arr, start, mid - 1, X);
// }
// int main()
// {
//     int arr[] = {3, 8, 11, 15, 20, 22};
//     cout<< BinarySearch(arr, 0, 5, 11);

// }

// print  5 to 1

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n == 0)
//         return;
//     cout << n << endl;
//     print(n - 1);
// }
// int main(){
//     print(5);
// }

// PRINT ARRAY IN REVERSE ORDER

// #include<iostream>
// using namespace std;
// void print(int arr[],int index){
//     if(index == -1)
//         return;
//     cout << arr[index]<<" ";
//     print(arr, index - 1);
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     print(arr, 5);
// }

// PRINT ARRAY USING VECTOR

// #include<bits/stdc++.h>
// using namespace std;
// int sum(vector <int> arr, int index, int n)
// {
//     if(index == n)
//     return 0;
//     return arr[index] + sum(arr, index + 1, n);
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<int>arr(n);
//     cout << sum(arr, 0, n);
// }/

// BINARY SEARCH

// #include <bits/stdc++.h>
// using namespace std;
// bool BinarySearch(int arr[],int start,int end,int X){
//     if(start > end )
//         return 0;
//     int mid = start + (end - start) / 2;
//     if(arr[mid] == X)
//         return 1;
//     else if(arr[mid] < X)
//         return BinarySearch(arr,mid - 1,end, X);
//     else
//         return BinarySearch(arr, start, mid - 1, X);
//     }
// int main(){
//     int arr[] = {1, 3, 5, 7, 9, 13, 15,16};
//     BinarySearch(arr, 0, 8, 13);
// }

// FIBONACCI SERIES

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }
// int main(){

//     cout<< fib(6);
// }

// MERGE short

// #include<bits/stdc++.h>
// using namespace std;

// // function for merging

// void merge(int arr[], int start, int mid, int end)
// {
//     vector <int> temp(end - start + 1);
//     int left = start, right = mid +1, index = 0;
//     while(left <= mid && right <=end)
//     {
//         if(arr[left] <= arr[right]){
//             temp[index] = arr[left];
//             index++, left++;
//         }
//         else
//         {
//             temp[index] = arr[right];
//             index++, right++;
//         }
//     }
//     // remains in left
//     while(left <= mid){
//         temp[index] = arr[left];
//         index++, left++;
//     }
//     // remains in right
//     while(right <= end){
//         temp[index] = arr[right];
//         index++, right++;
//     }

//     // Copy merged elements back to the original array
//     index = 0;
//     while (start <= end)
//     {
//         arr[start] = temp[index];
//         start++, index++;
//     }
// }

// // function for sorting : we use binary search

// void mergesort(int arr[], int start, int end){
//     if(start == end)
//         return;

//     int mid = start + (end - start) / 2;
//     // for left part
//     mergesort(arr, start, mid);

//     //  for right part
//     mergesort(arr, mid + 1, end);

//     // for merging
//     merge(arr, start, mid, end);
// }
// int main(){
//     int arr[] = {2, 3, 4, 6, 18, 13, 11, 5, 1, 21};
//     mergesort(arr, 0, 9);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ARRANGE THE AVOVE ARRAY IN DESCENDING ORDER\

// #include<bits/stdc++.h>
// using namespace std;

// // function for merging

// void merge(int arr[], int start, int mid, int end)
// {
//     vector <int> temp(end - start + 1);
//     int left = start, right = mid +1, index = 0;
//     while(left <= mid && right <=end)
//     {
//         if(arr[left] >= arr[right]){
//             temp[index] = arr[left];
//             index++, left++;
//         }
//         else
//         {
//             temp[index] = arr[right];
//             index++, right++;
//         }
//     }
//     // remains in left
//     while(left <= mid){
//         temp[index] = arr[left];
//         index++, left++;
//     }
//     // remains in right
//     while(right <= end){
//         temp[index] = arr[right];
//         index++, right++;
//     }

//     // Copy merged elements back to the original array
//     index = 0;
//     while (start <= end)
//     {
//         arr[start] = temp[index];
//         start++, index++;
//     }
// }

// // function for sorting : we use binary search

// void mergesort(int arr[], int start, int end){
//     if(start == end)
//         return;

//     int mid = start + (end - start) / 2;
//     // for left part
//     mergesort(arr, start, mid);

//     //  for right part
//     mergesort(arr, mid + 1, end);

//     // for merging
//     merge(arr, start, mid, end);
// }
// int main(){
//     int arr[] = {2, 3, 4, 6, 18, 13, 11, 5, 1, 21};
//     mergesort(arr, 0, 9);
//     cout << "\n Descending Array: ";
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// QUICK SORRT USING RECURSION...............

// #include <bits/stdc++.h>
// using namespace std;
// int partition(int arr[], int start, int end)
// {
//     int pos = start;
//     for (int i = start; i <= end; i++)
//     {
//         if (arr[i] <= arr[end])
//         {
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
//     return pos - 1;
//     // index=pos-1;
// }

// void quickSort(int arr[], int start, int end){
//     // Base Case
// if(start >= end)
//     return;
// int pivot = partition(arr, start, end);
// // left
// quickSort(arr, start, pivot - 1);
// quickSort(arr, pivot + 1, end);
// }

// int main(){
//     int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9};
//     quickSort(arr, 0, 9);
//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << " ";
// }

// quick sort for descending order

// #include <bits/stdc++.h>
// using namespace std;
// int partition(int arr[], int start, int end)
// {
//     int pos = start;
//     for (int i = start; i <= end; i++)
//     {
//         if (arr[i] >= arr[end])
//         {
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
//     return pos - 1;
//     // index=pos-1;
// }

// void quickSort(int arr[], int start, int end){
//     // Base Case
// if(start >= end)
//     return;
// int pivot = partition(arr, start, end);
// // left
// quickSort(arr, start, pivot - 1);
// quickSort(arr, pivot + 1, end);
// }

// int main(){
//     int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9};
//     quickSort(arr, 0, 9);
//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << " ";
// }

// Subsequence

// #include <bits/stdc++.h>
// using namespace std;
// void subsequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp)
// {
//     // Base case :we can put directly Array.
//     if (index == n)
//     {
//         ans.push_back(temp);
//         return;
//     }

//     // No condition
//     subsequence(arr, index + 1, n, ans, temp);
//     // Yes Condition
//     temp.push_back(arr[index]);
//     subsequence(arr, index + 1, n, ans, temp);
//     temp.pop_back();
// }
// int main()
// {
//     int arr[] = {1, 2, 3};
//     //  2D vector for final output
//     vector<vector<int > > ans;
//     // another empty vector : null vector
//     vector<int> temp;
//     subsequence(arr, 0, 3, ans, temp);
//     // For Row
//     for (int i = 0; i < ans.size(); i++)
//     {
//         // For Column
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// string abc print all subsequence

// #include <bits/stdc++.h>
// using namespace std;
// void subsequence(int arr[], int index, int n, vector<vector<char>> &ans, vector<char> temp)
// {
//     // Base case :we can put directly Array.
//     if (index == n)
//     {
//         ans.push_back(temp);
//         return;
//     }

//     // No condition
//     subsequence(arr, index + 1, n, ans, temp);
//     // Yes Condition
//     temp.push_back(arr[index]);
//     subsequence(arr, index + 1, n, ans, temp);
//     temp.pop_back();
// }
// int main()
// {
//     int arr[] = {'a','b','c'};
//     //  2D vector for final output
//     vector<vector<char>> ans;
//     // another empty vector : null vector
//     vector<char> temp;
//     subsequence(arr, 0, 3, ans, temp);
//     // For Row
//     for (int i = 0; i < ans.size(); i++)
//     {
//         // For Column
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// Generate parenthesis

// #include<bits/stdc++.h>
// using namespace std;
// int parenthesis(int n, int left, int right, vector<string>&ans, string&temp){
//     // Base case
//     if(left+right == 2*n){
//         ans.push_back(temp);
//         return;
//     }

//     // left parenthesis
//     if(left < n){
//         temp.push_back('(');
//         parenthesis(n, left + 1, right, ans, temp);
//         temp.pop_back();
//     }
//     // right parenthesis
//     if(right < left){
//         temp.push_back(')');
//         parenthesis(n, left, right + 1, ans, temp);
//         temp.pop_back();
//     }
// }
// int main(){
//     vector<string> ans;
//     string temp;
//     parenthesis(n, 0, 0, ans, temp);
//     return;
// }

// SUBSET SUM

// #include<bits/stdc++.h>
// using namespace std;
// void print(int arr[],int index,int n,int sum)
// {
//     // Base case
//     if(index == n){
//         cout << sum <<endl;
//         return;
//     }

// // NO include
//     print(arr, index + 1, n, sum);
//     // yes include
//     print(arr, index + 1, n, sum + arr[index]);
// }
// int main(){
// int arr[] = {1,2,3,4};
// print(arr, 0, 4, 0);
// }

// Method- 2:

// #include<bits/stdc++.h>
// using namespace std;
// void print(int arr[],int index,int n,int sum,vector<int>&ans)
// {
//     // Base case
//     if(index == n){
//         ans.push_back(sum);
//         return;
//     }

// // NO include
//     print(arr, index + 1, n, sum, ans);
//     // yes include
//     print(arr, index + 1, n, sum + arr[index],ans);
// }
// int main(){
// int arr[] = {1,2,3,4};
// vector<int>ans;
// print(arr, 0, 4,0,ans);
// for (int i = 0; i < ans.size();i++){
//     cout << ans[i] << endl;
// }
// }

// PRINT SUM AND SUBSET BOTH

// #include<bits/stdc++.h>
// using namespace std;
// void print(int arr[],int index,int n,int sum,vector<int>&subsetSum,vector<int>&currentsubset)
// {
//     // Base case
//     if(index == n){
//         subsetSum.push_back(sum);
//         currentsubset.push_back(sum);
//         return;
//     }

// // NO include
//     print(arr, index + 1, n, sum, subsetSum,currentsubset);
//     // yes include
//     print(arr, index + 1, n, sum + arr[index],subsetSum, currentsubset);
// }
// int main(){
// int arr[] = {1,2,3,4};
// vector<int>subsetSum;
// vector<int>currentsubset;
// // for printing subset
// print(arr, 0, 4,0,subsetSum,currentsubset);
// for (int i = 0; i < subsetSum.size();i++){
//     cout << subsetSum[i] << endl;
// }

// // for printing subset sum

// for (int i = 0; i < currentsubset.size();i++){
//     cout << currentsubset[i] << endl;
// }
// }

// TRAGET SUM:

// #include<bits/stdc++.h>
// using namespace std;
// bool find(int arr[], int index,int n, int target)
// {
//     if(target == 0){
//         return 1;
//     }
//     if(index == n||target < 0){
//         return 0;
//     }
//     // left side : no and ||  right side:yes
//     return find(arr, index + 1, n, target) || find(arr, index + 1, n, target - arr[index]);
// }
// int main(){
//     int arr[] = {3, 6, 4, 5};
//     int target = 12;
//     cout<<find(arr, 0, 4, target)<<" ";
// }

// PERFECT SUM

// #include<bits/stdc++.h>
// using namespace std;
// int  subset(int arr[], int index,int n, int sum)
// {
// if (index == n)
//     return sum == 0;
//
//     // left side : no and ||  right side:yes
//     return subset(arr, index + 1, n, sum) + subset(arr, index + 1, n, sum - arr[index]);
// }
// int main(){
//     int arr[] = {2, 5, 6, 1};
//     cout<<subset(arr, 0, 4, 8)<<" ";
// }

// perfect sum example of arr[] ={0,1} ,,it is case of negative values where we have to include case of zero ans is in copy and reason.

// #include <bits/stdc++.h>
// using namespace std;
// int subset(int arr[], int index, int n, int sum)
// {
//     if (index == n)
//         return sum == 0;

//     return subset(arr, index + 1, n, sum) + subset(arr, index + 1, n, sum - arr[index]);
// }
// int main()
// {
//     int arr[] = {1, 0};
//     int sum = 1;
//     cout<<subset(arr, 0, 2,sum);

// Target sum repetation

// #include<bits/stdc++.h>
// using namespace std;
// int subsum(int arr[], int index, int n,int sum){

//     // Base case
//     if(sum == 0)
//         return 1;
//     if(index == n || sum < 0)
//         return 0;

//         // for left and right

//     return subsum(arr, index + 1, n, sum) + subsum(arr, index , n, sum - arr[index]);
// }
// int main(){
//     int arr[] = {2, 3, 4};
//     cout<<subsum(arr, 0, 3, 6)<<endl;
// }

// PERMUATATION

// #include <bits/stdc++.h>
// using namespace std;

// void permute(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
// {
//     // Base case
//     if (visited.size() == temp.size())
//     {
//         ans.push_back(temp);
//         return;
//     }

//     for (int i = 0; i < visited.size(); i++)
//     {
//         if (visited[i] == 0)
//         {
//             visited[i] = 1;
//             temp.push_back(arr[i]);
//             permute(arr, ans, temp, visited);
//             visited[i] = 0;
//             temp.pop_back();
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool> visited(3, 0);
//     permute(arr, ans, temp, visited);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//             cout << ans[i][j] << " ";
//             cout << endl;
//     }
// }

// PERMUTATION 2 :

// #include <bits/stdc++.h>
// using namespace std;

// void permute(vector<int>&arr, vector<vector<int>> &ans, int index)
// {
//     // Base case
//     if (index ==arr.size())
//     {
//         ans.push_back(arr);
//         return;
//     }
//     vector<bool> use(21, 0);
//     for (int i = 0; i <arr.size(); i++)
//     {
//         if (use[arr[i]+10] == 0)
//         {
//             swap(arr[index], arr[i]);
//             permute(arr, ans, index + 1);
//             swap(arr[index], arr[i]);
//             use[arr[i] + 10] = 1;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 1, 2};
//     vector<vector<int>>ans;
//     permute(arr, ans, 0);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//             cout << ans[i][j] << " ";
//             cout << endl;
//     }
// }

// WAYS TO SUM N

// #include <bits/stdc++.h>
// using namespace std;
// int ways(int arr, int m, int sum)
// {
//     if (sum == 0)
//         return 1;
//     if (sum < 0)
//         return 0;
//     int ans = 0;
//     for (int i = 0; i < m; i++)
//     {

//         ans += ways(arr, m, sum - arr[i]);
//     }
//     return ans;
// }
// int main()
// {
// }


