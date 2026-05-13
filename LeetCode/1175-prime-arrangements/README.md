# 1175. Prime Arrangements

## Problem Overview

- Platform: LeetCode
- Problem Number: 1175
- Difficulty: Easy
- Language: 123456789101112131415161718192021222324class Solution {public: static const long long MOD = 1e9 + 7; // function to count primes using sieve int countPrimes(int n) { vector<bool> prime(n + 1, true); prime[0] = prime[1] = false; int count = 0; for (int i = 2; i <= n; i++) { if (prime[i]) { count++; for (int j = 2 * i; j <= n; j += i) { prime[j] = false; } } } return count; } long long fact(long long x) { long long res = 1;
- Solution File: `solution.txt`

## Topics
- Math

## Problem Link
https://leetcode.com/problems/prime-arrangements/

## Description
Return the number of permutations of 1 to n so that prime numbers are at prime indices (1-indexed.) (Recall that an integer is prime if and only if it is greater than 1, and cannot be written as a product of two positive integers both smaller than it.) Since the answer may be large, return the answer modulo 10^9 + 7. Example 1: Input: n = 5 Output: 12 Explanation: For example [1,2,5,4,3] is a valid permutation, but [5,2,3,4,1] is not because the prime number 5 is at index 1. Example 2: Input: n = 100 Output: 682289015 Constraints: 1 <= n <= 100

## Full Solution Code
```
class Solution {
public:
    static const long long MOD = 1e9 + 7;

    // function to count primes using sieve
    int countPrimes(int n) {
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        int count = 0;

        for (int i = 2; i <= n; i++) {
            if (prime[i]) {
                count++;
                for (int j = 2 * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }
        return count;
    }

    long long fact(long long x) {
        long long res = 1;

```

## Synced At
May 13, 2026 at 10:26:06 AM UTC
