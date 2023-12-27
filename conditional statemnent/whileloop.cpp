// print  n number

// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     int i=1;  //initialise
//     while(i<=n){    //break
//         cout<<i<<" ";
//         i++;   //update
//     }
// }

// PRINT TABLE OF N

// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     int i=1;
//     while(i<=10){
//         cout<<i*n<<" ";
//         i++;
//     }
// }

// PRINT factor OF N

// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         if(n%i==0)
//         cout<<i<<" ";
//         i++;
//     }
// }

// print all even number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         if (n % 2 == 0)
//             cout << i << "even" << endl;
//         else
//             cout << i << "odd" << endl;
//         i++;
//     }
// }

// DO WHILE:

// print 1 to n

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int i = 1;   //initializes

//     do
//     {
//         cout << i << " ";
//         i++;      //update
//     } while (i <= n);    //break
// }

// print table of n

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int i = 1;   //initializes

//     do
//     {
//         cout << n*i << " ";
//         i++;      //update
//     } while (i <= n);    //break
// }

// sum of n number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int sum=0;
//     int i = 1;   //initializes

//     do
//     {
//         cout << i <<endl;
//         sum+=i;
//         i++;      //update
//     } while (i <= n);    //break
// }

// BREAK AND CONTINUE

// use of break

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         if (i == n)
//             break;
//         cout << i << " ";
//         i++;
//     }
// }

// US OF CONTINUE

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 4 == 0)
//             continue;
//         cout << i << " ";
//     }
// }  

//  SWITCH CASE

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     switch (n)
//     {
//     case 1:
//         cout << "Appu";
//         break;
//     case 2:
//         cout << "Ashu";
//         break;
//     default:
//         cout << "dingdomg";
//     }
// }

//  or

// #include <iostream>
// using namespace std;
// int main()
// {
//     char name;
//     cout << "enter name: ";
//     cin >> name;
//     switch (name)
//     {
//     case 'a':
//         cout << "Appu";
//         break;
//     case 'b':
//         cout << "Ashu";
//         break;
//     default:
//         cout << "dingdomg";
//     }
// }
