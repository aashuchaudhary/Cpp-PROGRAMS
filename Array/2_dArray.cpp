// #include <iostream>
// using namespace std;

// // void printcol(int arr[][4], int row, int col)
// // {

// //     // column wise
// //         for (int j = 0; j < col; j++)
// //     for (int i = 0; i < row; i++)
// //             cout << arr[i][j] << " ";
// // }

// int main()
// {
//     // creating 2-D Array

//     int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

//     // for finding element  X in our array

//     // int X = 7;
//     // for (int row = 0; row < 3; row++)
//     // {
//     //     for (int col = 0; col < 4; col++)
//     //     {
//     //         if (arr[row][col] == X)
//     //         {
//     //             cout << "yes";
//     //             return 0;
//     //         }
//     //     }
//     // cout<<"No";
//     // }

//     // print all values in array row wise

//     // for(int row= 0;row<3;row++)
//     // for(int col=0;col<4;col++)
//     // cout<<arr[row][col]<<" ";
//     // cout<<endl;

//     // print all values in arry col wise,function call

//     // printcol(arr, 3, 4);

// }

// ADD Two Matrix

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int arr2[3][4] = {0, 1, 3, 4, 5, 6, 10, 11, 42, 14, 9, 13};
//     int ans[3][4];

//     // add two matrix
//     for (int row = 0; row < 3; row++)
//         for (int col = 0; col < 4; col++)
//             {
//             ans[row][col] = arr1[row][col] + arr2[row][col];
//             }

//     for (int row = 0; row < 3; row++)
//         for (int col = 0; col < 4; col++)
//         {
//             cout<<ans[row][col]<<" ";
//         }
// }

// // Sub Two Matrix

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int arr2[3][4] = {0, 1, 3, 4, 5, 6, 10, 11, 42, 14, 9, 13};
//     int ans[3][4];

//     // add two matrix
//     for (int row = 0; row < 3; row++)
//         for (int col = 0; col < 4; col++)
//             {
//             ans[row][col] = arr1[row][col] - arr2[row][col];
//             }

//     for (int row = 0; row < 3; row++)
//         for (int col = 0; col < 4; col++)
//         {
//             cout<<ans[row][col]<<" ";
//         }
// }

// Multiply Two Matrix

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int arr2[3][4] = {0, 1, 3, 4, 5, 6, 10, 11, 42, 14, 9, 13};
//     int ans[3][4];

//     // add two matrix
//     for (int row = 0; row < 3; row++)
//         for (int col = 0; col < 4; col++)
//             {
//             ans[row][col] = arr1[row][col] * arr2[row][col];
//             }

//     for (int row = 0; row < 3; row++)
//         for (int col = 0; col < 4; col++)
//         {
//             cout<<ans[row][col]<<" ";
//         }
// }

// modulus of two matrix

/* #include <iostream>
using namespace std;
int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {0, 1, 3, 4, 5, 6, 10, 11, 42, 14, 9, 13};
    int ans[3][4];

    // add two matrix
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
            {
            ans[row][col] = arr1[row][col] % arr2[row][col];
            }

    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
        {
            cout<<ans[row][col]<<" ";
        }
} */

// Divide of two matrix

/* #include <iostream>
using namespace std;

int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {0, 1, 3, 4, 5, 6, 10, 11, 42, 14, 9, 13};
    int ans[3][4];

    // divide two matrix
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
            {
            ans[row][col] = arr1[row][col] / arr2[row][col];
            }

    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
        {
            cout<<ans[row][col]<<" ";
        }
}
 */
// PRINT ROW INDEX WITH MAX SUM

/* #include <iostream>
#include <climits>
using namespace std;

void printcol(int arr[][4], int row, int col)
{

    // column wise
    for (int j = 0; j < col; j++)
        for (int i = 0; i < row; i++)
            cout << arr[i][j] << " ";
}

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }

        if (total > sum)
        {
            sum = total;
            index = i;
        }
    }
    cout << index << " ";
}

int main()
{

    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {0, 1, 3, 4, 5, 6, 10, 11, 42, 14, 9, 13};
    int ans[3][4];
    printrowmax(arr1, 3, 4);
} */

// PRINT SUM OF DIAGONAL ELEMENT


/* #include <iostream>
using namespace std;
void printsumdig(int matrix[][3],int row,int col)
{
    int first =0; 
    int second =0;

    // first diagonal sum

    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }
    
    // second diagonal sum
    i=0;
    int j=col-1;
    while(j>=0)
    {
        second+=matrix[i][j];
        i++,j--;
    }
    cout<<first<<" "<<second<<" ";
}

int main()
{
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    printsumdig(matrix,3,3);
} */

// REVERSE EACH ROW OF MATRIX.

#include <iostream>

using namespace std;



int main()
{

   
}