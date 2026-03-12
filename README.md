##Two Sum
Description
This project implements the classic "Two Sum" problem in C++. The goal is to find two indices in an array of integers that add up to a given target value. Two different approaches are provided: a brute force method using nested loops and an optimized method using a hash table. This project demonstrates trade-offs between time and space complexity, includes comprehensive unit tests, and is set up with CI/CD using GitHub Actions and containerized with Docker.

Problem Statement
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

You may assume that each input has exactly one solution, and you may not use the same element twice. You can return the answer in any order.

Example
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1] (because nums[0] + nums[1] == 9)
Implementation
The project includes two functions in twosum.cpp:

twoSumArray: Brute force approach using nested loops.
twoSumHashTable: Optimized approach using an unordered map (hash table).
Complexity Analysis
TwoSumArray:

Time Complexity: O(n²) – Nested loops check every pair.
Space Complexity: O(1) – No extra space used.
TwoSumHashTable:

Time Complexity: O(n) – Single pass through the array.
Space Complexity: O(n) – Uses a hash map to store elements.
Installation and Running
Prerequisites
C++ compiler (e.g., g++ with C++11 support)
Git (for cloning the repository)
Steps
Clone the repository:

Compile the code:

Run the tests:

Testing
Unit tests are implemented in test_twosum.cpp using assertions. The tests cover:

Normal cases
Edge cases (e.g., duplicates, negative numbers)
Boundary conditions (e.g., no solution)
Run the tests as described above. All tests should pass with the message "All tests passed!"

CI/CD
The project uses GitHub Actions for continuous integration. The workflow (.github/workflows/ci.yml) runs tests on every push and pull request to the main branch.

It sets up a C++ environment on Ubuntu.
Compiles and runs the test suite.
Docker
The project is containerized using Docker for easy deployment.

Build and Run
Build the Docker image:

Run the container (which executes the tests):

The Dockerfile compiles the code and runs tests during the build process.

Contributing
Contributions are welcome! Please fork the repository, make your changes, and submit a pull request. Ensure all tests pass and follow the existing code style.

License
This project is licensed under the MIT License. See the LICENSE file for details.