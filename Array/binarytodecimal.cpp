// DECIMAL TO BINARY

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number :";
//     cin >> num;
//     int rem, ans = 0, mul = 1;
//     while (num > 0)
//     {
//         // remainder
//         // rem = num % 2;
//            //we can also use bitwise operator
//         rem = num&1;
//         // quotient
//         // num /= 2;

//         // right shift property

//         num =num>> 1;

//         // answer
//         ans += rem * mul;
//         // multiplier
//         mul *= 10;
//     }
//     cout << ans << endl;
// }

//BINARY TO DECIMAL

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number :";
//     cin >> num;
//     int rem, ans = 0, mul = 1;
//     while (num > 0)
//     {
//         // remainder
//         rem = num % 10;

//         //  num ko  divide kardo
//         num /= 10;
//         // ans
//         ans += mul * rem;

//         // mul
//         mul *= 2;
//     }
//     cout << ans << endl;
// }

// OCTA

// binay to octa

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number :";
//     cin >> num;
//     int rem, ans = 0, mul = 1;
//     while (num > 0)
//     {
//         // remainder
//         rem = num % 8;

//            //we can also use bitwise operator
//         // rem = num&1;

//         // quotient
//         num /= 8;

//         // right shift property
//         // num =num>> 1;

//         // answer
//         ans += rem * mul;
//         // multiplier
//         mul *= 10;
//     }
//     cout << ans << endl;
// }

// octa to binary

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number :";
//     cin >> num;
//     int rem, ans = 0, mul = 1;
//     while (num > 0)
//     {
//         // remainder
//         rem = num % 10;

//            //we can also use bitwise operator
//         // rem = num&1;

//         // quotient
//         num /= 10;

//         // right shift property
//         // num =num>> 1;

//         // answer
//         ans += rem * mul;
//         // multiplier
//         mul *= 8;
//     }
//     cout << ans << endl;
// }