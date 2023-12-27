// Subsequesnce for arr[]={1,2,3}

/* #include <bits/stdc++.h>
using namespace std;
void subsequence(int arr[], int index,int n,vector<vector<int > > &ans, vector<int> temp)
{
    // Base Case
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    // Not include
    subsequence(arr, index + 1, n, ans, temp);
    // yes include
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, n, ans, temp);
    temp.pop_back();
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int> > ans;
    vector<int> temp;
    subsequence(arr, 0, 3, ans, temp);
    for(int i=0;i<ans.size();i++)
    {

    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    }
} */

// OR

/* #include <bits/stdc++.h>
using namespace std;

void subsequence(const vector<int> &arr, int index, vector<vector<int>> &ans, vector<int> &temp) {
    // Base Case
    if (index == arr.size()) {
        ans.push_back(temp);
        return;
    }

    // Not include
    subsequence(arr, index + 1, ans, temp);

    // Include
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, ans, temp);
    temp.pop_back();
    // Backtrack to remove the last element and explore other possibilities
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    subsequence(arr, 0, ans, temp);

    // Displaying the result
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} */


// PROBLEM 
// PRINT ALL SUB SEQUENCE OF A STRING
//Subsequence for string="a,b,c"

/* #include <bits/stdc++.h>
using namespace std;
void subset(string &s, int index, int n, vector<string> &ans, string &temp)
{
    // Base Case
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    // Not include
    subset(s, index + 1, n, ans, temp);
    // yes include
    temp.push_back(s[index]);
    subset(s, index + 1, n, ans, temp);
    temp.pop_back();
}
int main()
{
    string s = "abcd";
    vector<string> ans; // final ams
    string temp;
    subset(s, 0, s.size(), ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
} */

