#include <vector>
#include <unordered_map>
#include <cassert>
#include <iostream>
using namespace std;

vector<int> twoSumArray(const  vector<int>& nums, int target) {
    // Brute force approach using nested loops.
    // Time complexity: O(n^2)
    // Space complexity: O(1)
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {static_cast<int>(i), static_cast<int>(j)};
            }
        }
    }
    return {};
}

 vector<int> twoSumHashTable(const  vector<int>& nums, int target) {
    // Optimized approach using a hash table.
    // Time complexity: O(n)
    // Space complexity: O(n)
     unordered_map<int, int> seen;
    for (size_t i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], static_cast<int>(i)};
        }
        seen[nums[i]] = i;
    }
    return {};
}

#include <vector>
#include <unordered_map>

 vector<int> twoSumArray(const  vector<int>& nums, int target) {
    // Brute force approach using nested loops.
    // Time complexity: O(n^2)
    // Space complexity: O(1)
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {static_cast<int>(i), static_cast<int>(j)};
            }
        }
    }
    return {};
}

 vector<int> twoSumHashTable(const  vector<int>& nums, int target) {
    // Optimized approach using a hash table.
    // Time complexity: O(n)
    // Space complexity: O(n)
     unordered_map<int, int> seen;
    for (size_t i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], static_cast<int>(i)};
        }
        seen[nums[i]] = i;
    }
    return {};
}

void testNormalCase() {
     vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    auto result1 = twoSumArray(nums, target);
    assert(result1 ==  vector<int>({0, 1}));
    auto result2 = twoSumHashTable(nums, target);
    assert(result2 ==  vector<int>({0, 1}));
}

void testEdgeCaseDuplicates() {
     vector<int> nums = {3, 3};
    int target = 6;
    auto result1 = twoSumArray(nums, target);
    assert(result1 ==  vector<int>({0, 1}));
    auto result2 = twoSumHashTable(nums, target);
    assert(result2 ==  vector<int>({0, 1}));
}

void testNegativeNumbers() {
     vector<int> nums = {-1, -2, -3, -4, -5};
    int target = -8;
    auto result1 = twoSumArray(nums, target);
    assert(result1 ==  vector<int>({2, 4}));
    auto result2 = twoSumHashTable(nums, target);
    assert(result2 ==  vector<int>({2, 4}));
}

void testBoundaryNoSolution() {
     vector<int> nums = {1, 2, 3};
    int target = 10;
    auto result1 = twoSumArray(nums, target);
    assert(result1.empty());
    auto result2 = twoSumHashTable(nums, target);
    assert(result2.empty());
}

int main() {
    testNormalCase();
    testEdgeCaseDuplicates();
    testNegativeNumbers();
    testBoundaryNoSolution();
     cout << "All tests passed!" <<  endl;
    return 0;
}