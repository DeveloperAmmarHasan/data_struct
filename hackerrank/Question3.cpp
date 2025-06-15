#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to find the number of maximum elements in the array
int birthdayCakeCandles(vector<int> candles) {
    int count = 0;
    int maxHeight = INT_MIN; // Initialize maxHeight to the smallest possible integer
    // Iterate through the candles to find the maximum height and count its occurrences
     if (candles.empty()) return 0; // Handle empty vector case
    for (int i = 0; i < candles.size(); i++) { // Loop through each candle
    // Update maxHeight and count accordingly
        if (candles[i] > maxHeight) {
            maxHeight = candles[i];
            count=1; // Reset count for new maximum 
        }
         else if (candles[i] == maxHeight) {
            count++; // Increment count for equal maximum
        }
    }
    return count; // Return the count of maximum elements
}

//driver code to test the function
int main() {
    vector<int> candles = {4, 4, 2, 1, 4, 4}; // Example input
    int result = birthdayCakeCandles(candles); // Call the function
    cout << "Number of maximum height candles: " << result << endl; // Output the result
    return 0; // Indicate successful execution
}