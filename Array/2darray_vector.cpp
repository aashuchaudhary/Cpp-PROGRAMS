// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // create 2d array
// int main()
// {
//     int n,m;
//     cout<<"Enter rows and col: ";
//     cin>>n>>m;
// vector<vector<int>> matrix(n,vector<int>(m,1));
// // vector<vector<int>> matrix(3,vector<int>(4,1));
// // for(int i=0;i<3; i++)
// // for(int j=0; j<4;j++)
// // cout<<matrix[i][j];

// // taking rows and colmn size from user

// // cout<<"Rows= "<<matrix.size();
// // cout<<endl;
// // cout<<"Col= "<<matrix.size();

// //    for printing

// for(int i=0;i<n;i++)
// for(int j=0;j<m;j++)
// cin>>matrix[i][j];

// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     cin>>matrix[i][j];
//     cout<<endl;
// }


// }


// WAVE PRINT  PROBLEM 

// #include<iostream>
// using namespace std;
// void wave(int arr[][4],int row,int col)
// {
//     for(int j=0;j<col;j++)
//     {
//         if(j%2==0)
//         {
//             for(int i=0;i<row;i++)
//             cout<<arr[i][j]<<" ";
//             for(int i=0;i<row;i++)
//             cout<<arr[i][j]<<" ";
//         }
//         else 
//             for(int i=row-1;i>=0;i--) 
//             cout<<arr[i][j]<<" ";
//     }
// }
// int main(){
//     int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int arr2[3][4] = {0, 1, 3, 4, 5, 6, 10, 11, 42, 14, 9, 13};
//     int ans[3][4];
//     wave(arr1,3,4);
// }





