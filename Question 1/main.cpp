/*
 * Jacques Ivan Cacatian-Martinez
 * November 16 2024
 * Assignment 4 - Question 1
 */
#include <iostream>
#include <vector>
using namespace std;

void getDiagonalSum(const vector<vector<int>>& arr) {
    vector<int> addends;
    int sum{0};
    // Get diagonal values
    for (size_t i{0}; i < arr.size(); i++) {
        // The diagonal value is always the ith column of ith row
        sum += arr[i][i];

        // Add addends for console display
        addends.push_back(arr[i][i]);
    }

    // Get opposite diagonal values
    for (size_t i{0}; i < arr.size(); i++) {
        // Skip if there exists a middle element (counted above)
        if (i == arr.size() - 1 - i)
            continue;

        // The opposite diagonal starts from the last column instead and goes down
        sum += arr[i][arr.size() - 1 - i];

        // Add addends for console display
        addends.push_back(arr[i][arr.size() - 1 - i]);
    }

    cout << "The sum of two diagonals of the array is " << sum << " = ";

    // Print addends with +
    for (size_t i{0}; i < addends.size(); i++) {
        cout << addends[i];
        if (i != addends.size()-1)
            cout << "+";
    }

    // End of line
    cout << "." << endl;
}

vector<vector<int>> getUserInput() {
    int array_size;
    cout << "What array size would you like to input?";
    cin >> array_size;

    // Initialize array with user defined array size
    vector<vector<int>> arr(array_size, vector<int>(array_size, 0));

    // Get input
    for (size_t i{0}; i < array_size; i++) {
        cout << "Enter " << array_size << " values for row " << i + 1 << ": ";
        for (size_t j{0}; j < array_size; j++) {
            cin >> arr[i][j];
        }
    }

    return arr;
}

int main() {
    // Test values
    // vector<vector<int>> testEvenArr = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}
    // };
    //
    // vector<vector<int>> testOddArr = {
    //     {1, 2, 3},
    //     {5, 6, 7},
    //     {9, 10, 11}
    // };
    //
    // getDiagonalSum(testEvenArr);
    // getDiagonalSum(testOddArr);

    // Get user input
    vector<vector<int>> userArr = getUserInput();

    getDiagonalSum(userArr);
    return 0;
}
