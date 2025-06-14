#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> twoSum(const vector<int>& nums, int target) {
    // For unsorted array: use a hash map to store complements
    unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_map.count(complement)) {
            return {num_map[complement], i};
        }
        num_map[nums[i]] = i;
    }
    return {-1, -1};

    // For sorted array: use two pointers (not used here as input is unsorted)
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) return {left, right};
        else if (sum < target) ++left;
        else --right;
    }
    return {-1, -1};
}
int main() {
    vector<int> nums = {3,2,4};
    int target = 6;
    pair<int, int> result = twoSum(nums, target);
    
    if (result.first != -1) {
        cout << "Pair found: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "No pair found." << endl;
    }
    
    return 0;
}