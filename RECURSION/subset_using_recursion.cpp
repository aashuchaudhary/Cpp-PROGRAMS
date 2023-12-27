// Problem 1: Subset sum
/* #include<bits/stdc++.h>
using namespace std;
void  print(int arr[],int index,int n,int sum)
{
    // base case
    if(index==n)
    {
        cout<<sum<<endl;
        return;
    }
    // Not include
    print(arr,index+1,n,sum);
    // yes include
    print(arr,index+1,n,sum+arr[index]);
}
int main()
{
    int arr[]={1,2,3,4};
    print(arr,0,4,0);
} */

// ans ko agar main function se print krna ho tb
/* #include<bits/stdc++.h>
using namespace std;
void  print(int arr[],int index,int n,int sum,vector<int>&ans)
{
    // base case
    if(index==n)
    {
        ans.push_back(sum);
        return;
    }
    // Not include
    print(arr,index+1,n,sum,ans);
    // yes include
    print(arr,index+1,n,sum+arr[index],ans);
}
int main()
{
    int arr[]={1,2,3,4};
    vector<int>ans;
    print(arr,0,4,0,ans);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
} */

// Print subset with ans 
/* 
#include <bits/stdc++.h>
using namespace std;

void printSubsetsAndSums(int arr[], int index, int n, int sum, vector<int>& subsetSums, vector<int>& currentSubset) {
    // Base case
    if (index == n) {
        subsetSums.push_back(sum);

        // Print the current subset and its sum
        cout << "Subset: ";
        for (int i = 0; i < currentSubset.size(); i++) {
            cout << currentSubset[i] << " ";
        }
        cout << "| Sum: " << sum << endl;

        return;
    }

    // Not include
    printSubsetsAndSums(arr, index + 1, n, sum, subsetSums, currentSubset);

    // Include
    currentSubset.push_back(arr[index]);
    printSubsetsAndSums(arr, index + 1, n, sum + arr[index], subsetSums, currentSubset);
    currentSubset.pop_back(); // Backtrack to remove the last element and explore other possibilities
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> subsetSums;
    vector<int> currentSubset;

    printSubsetsAndSums(arr, 0, n, 0, subsetSums, currentSubset);

    // Print all subset sums separately
    cout << "All Subset Sums: ";
    for (int i = 0; i < subsetSums.size(); i++) {
        cout << subsetSums[i] << " ";
    }
    cout << endl;

    return 0;
} */


// Problem 2:Target sum

#include<bits/stdc++.h>
using namespace std;
bool find(int arr[],int index,int n,int target)
{
    // base condition
    if(target==0)
    return 1;
    if(index==n || target<0)
    return 0;

//    left and right 
return find(arr,index+1,n,target) ||find(arr,index+1,n,target-arr[index]);

}

int main(){ 
    int arr[]={2,4,1,8,7};
    int target=19;
    cout<<find(arr,0,5,target)<<" ";
}
