// Divide array in teo sub array with equal sum 


/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int> arr)
{
    int prefix = 0, total_sum = 0, n = arr.size();
    //  total sum
    for (int i = 0; i < n; i++)
        total_sum += arr[i];

    for (int i = 0; i < n;i++)
    {
        prefix += arr[i];
        // int ans = total_sum - prefix;
        // if(ans==prefix)
        // or ese bhi likh sakte hai
        // if(total_sum - prefix==prefix)
        if(2*prefix==total_sum)
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << divide(v);
    return 0;
}
*/

// Largest sun in contigious subarray
// KADANE'S ALGORITHM


 
