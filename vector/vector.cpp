// #include <iostream>
// #include <vector>
// //used for sorting
// #include <algorithm>   
// all in one header file
#include <bits/stdc++.h> 

using namespace std;
int main()
{
    /*
     // create vector ,declare
     vector<int> v;

     // initialise vector
     vector<int> v1(5, 1);

     // size and capacity
     cout << "size of vector: " << v.size() << endl;
     cout << "capacity of vector: " << v.capacity() << endl;
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     cout << "size of vector: " << v.size() << endl;
     cout << "capacity of vector: " << v.capacity() << endl;

     // update value
     v[1] = 5;
     cout << "size of vector: " << v1.size() << endl;
     cout << "capacity of vector: " << v1.capacity() << endl;
     v1.push_back(8);
     cout << "size of vector: " << v1.size() << endl;
     cout << "capacity of vector: " << v1.capacity() << endl;
     vector<int> v3 = {1, 2, 3, 4, 5};
     cout << "size of vector: " << v3.size() << endl;*/
/*
    //  delete value from vector
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(2);
    vnew.push_back(7);
    vnew.push_back(9);
    vnew.push_back(6);
    vnew.pop_back();

    cout << "size of vector nnew: " << vnew.size() << endl;
    cout << "capacity of vector nnew: " << vnew.capacity() << endl;

    // erase any value from middle than
    vnew.erase(vnew.begin() + 1);
    cout << "size of vector nnew: " << vnew.size() << endl;
    cout << "capacity of vector nnew: " << vnew.capacity() << endl;

    // printing values
    for (int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << " ";

    // insert new value
    vnew.insert(vnew.begin()+1,50);
    cout<<endl;
    // for (int i = 0; i < vnew.size(); i++)   //for putting value 50
    //     cout << vnew[i] << " ";

        // changing value
        vnew[1]=37;
    for (int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << " "<<endl;

        // for removing all the elements
        vnew.clear();
    cout << "size of vector nnew: " << vnew.size() << endl;
    cout << "capacity of vector nnew: " << vnew.capacity() << endl;
    */

   /*
   vector<int>arr;
   arr.push_back(2);
   arr.push_back(9);
   arr.push_back(5);
   arr.push_back(3);

//    for front
   cout<<arr[0]<<endl;
   cout<<arr.front()<<endl;

//    for last
   cout<<arr[arr.size()-1]<<endl;
   cout<<arr.back()<<endl;

//    copy value of one vector to another
vector<int>a;
a=arr;
cout<<a.size()<<endl;

// printing valuues of array
for(auto it=arr.begin();it!=arr.end();it++)
{
    cout<<*it<<" ";
}
cout<<endl;
// another way for printing valuues of array
for(auto i:arr)
cout<<i<<" ";
*/


// sorting a vector
vector<int> ans;
ans.push_back(5);
ans.push_back(8);
ans.push_back(2);
ans.push_back(3);
ans.push_back(9);
ans.push_back(1);

// sort array in ascending order 
sort(ans.begin(), ans.end());
for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
}
cout << endl;

// sort array in descending order

// sort(ans.begin(), ans.end(), greater<int>());
// for (int i = 0; i < ans.size(); i++) {
//     cout << ans[i] << " ";
// }
// cout << endl;

// another way to sort array in descending order 

// sort(ans.rbegin(), ans.rend());
// for (int i = 0; i < ans.size(); i++) {
//     cout << ans[i] << " ";
// }

// searching using binary search

cout << binary_search(ans.begin(), ans.end(), 3) << endl;
// if the value is present in array the it give output as 1 other wise 0.

// for finding index of any particular value

cout<<find(ans.begin(),ans.end(),3)-ans.begin()<<endl;

}