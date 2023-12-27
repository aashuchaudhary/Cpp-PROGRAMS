#include <iostream>
#include <vector>
#include <algorithm>  // Include the algorithm header

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

// one for 90 degree

    // Transpose Matrix
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row of Matrix
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
    // anotther 90 degree
    
    // Transpose Matrix
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row of Matrix
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

int main() {
    // Example usage:
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    // Print the rotated matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
