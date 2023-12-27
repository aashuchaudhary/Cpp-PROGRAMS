// #include <iostream>
// #include <vector>

// using namespace std;

// vector<vector<int>> findSubarrays(vector<int>& arr) {
//     vector<vector<int>> subarrays;
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             vector<int> subarray;
//             for (int k = i; k <= j; k++) {
//                 subarray.push_back(arr[k]);
//             }
//             subarrays.push_back(subarray);
//         }
//     }

//     return subarrays;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4};
//     vector<vector<int>> subarrays = findSubarrays(arr);

//     for (const auto& subarray : subarrays) {
//         cout << "[ ";
//         for (const auto& num : subarray) {
//             cout << num << " ";
//         }
//         cout << "]" << endl;
//     }

//     return 0;
// }

// or

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {4, 3, 7, 2};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            cout << "[ ";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "]" << endl;
        }
    }

    return 0;
}
