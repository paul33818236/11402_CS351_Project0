#Two Sum#


**Description**
This project implements the classic "Two Sum" problem in C++. The goal is to find two indices in an array of integers that add up to a given target value. Two different approaches are provided: a brute force method using nested loops and an optimized method using a hash table. This project demonstrates trade-offs between time and space complexity, includes comprehensive unit tests, and is set up with CI/CD using GitHub Actions and containerized with Docker.


**使用語言與環境**
- **Programming Language:** C++ 20,STL::vector
- **Environment:** Linux/Windows/macOS
- **Build System:** CMake
- **Testing Framework:** Google Test (gtest)
- **CI/CD:** GitHub Actions
- **Containerization:** Docker

**Problem Statement**
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

You may assume that each input has exactly one solution, and you may not use the same element twice. You can return the answer in any order.

**Example**
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1] (because nums[0] + nums[1] == 9)
Implementation
The project includes two functions in twosum.cpp:


**Requirement**
Input: an integer array nums and an integer target.

Output: a pair of indices [i, j] such that nums[i] + nums[j] == target (order does not matter).
Return an empty vector if no solution exists.

The first function (twoSumArray) must use a brute‑force nested‑loop approach
(time complexity O(n²), space complexity O(1)).

The second function (twoSumHashTable) must use an unordered_map hash table
to achieve O(n) time and O(n) extra space.

Write comprehensive unit tests covering:

*normal cases*
*duplicate values*
*negative numbers*
*boundary conditions and “no solution” cases*
Document the time and space complexity of each implementation in comments or the README.

Configure GitHub Actions to compile and run the tests on every push and pull request to the main branch.

Provide a Dockerfile that builds the code and executes the test suite as part of the container build.

Keep the code clean and well‑commented. Include build/run instructions in this README.

Problem Statement
Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

You may assume that each input has exactly one solution, and you may not use the same element twice. You can return the answer in any order.

Example
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1] (because nums[0] + nums[1] == 9)

Implementation
The two functions are implemented in twosum.cpp as described above.

Complexity Analysis
twoSumArray

Time Complexity: O(n²) – nested loops check every pair.
Space Complexity: O(1) – constant extra space.
twoSumHashTable

Time Complexity: O(n) – single pass through the array.
Space Complexity: O(n) – uses an unordered map.



**Installation and Running**
Prerequisites
。C++ compiler (g++ with C++11 support or later)
。Git
Build and run/

git clone https://github.com/paul33818236/11402_CS351_Project0.git
cd 11402_CS351_Project0
g++ -std=c++11 twosum.cpp test_twosum.cpp -o twosum_test
./twosum_test

All tests should pass with the message All tests passed!.

**Testing**
Unit tests are in test_twosum.cpp using simple assertions. They cover:

*normal cases*
*duplicate elements*
*negative numbers*
*no‑solution/boundary conditions*

**CI/CD**
GitHub Actions workflow (.github/workflows/ci.yml) compiles and runs the test suite on every push and pull request to main. It installs a C++ toolchain, compiles the code, and executes the tests.

**Docker**
The project includes a Dockerfile for containerized builds.

Build the image
*docker build -t twosum .*

Run the container
*docker run --rm twosum*

The container compiles the project and runs the tests as part of the build.

Contributing
Fork the repository, make changes, ensure all tests still pass, and submit a pull request. Follow existing code style and add comments where appropriate.

License
This project is licensed under the MIT License. See the LICENSE file for details.
