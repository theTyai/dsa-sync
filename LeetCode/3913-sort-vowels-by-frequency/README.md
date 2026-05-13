# 3913. Sort Vowels by Frequency

## Problem Overview

- Platform: LeetCode
- Problem Number: 3913
- Difficulty: Medium
- Language: C++
- Solution File: `solution.cpp`

## Topics
- Submit
- 0
- theTyai
- My Lists
- Notebook
- Progress

## Problem Link
https://leetcode.com/problems/sort-vowels-by-frequency/

## Description
You are given a string s consisting of lowercase English characters.

Rearrange only the vowels in the string so that they appear in non-increasing order of their frequency.

If multiple vowels have the same frequency, order them by the position of their first occurrence in s.

Return the modified string.

Vowels are 'a', 'e', 'i', 'o', and 'u'.

The frequency of a letter is the number of times it occurs in the string.

Example 1:

Input: s = "leetcode"

Output: "leetcedo"

Explanation:​​​​​​​

	Vowels in the string are ['e', 'e', 'o', 'e'] with frequencies: e = 3, o = 1.

	Sorting in non-increasing order of frequency and placing them back into the vowel positions results in "leetcedo".

Example 2:

Input: s = "aeiaaioooa"

Output: "aaaaoooiie"

Explanation:​​​​​​​

	Vowels in the string are ['a', 'e', 'i', 'a', 'a', 'i', 'o', 'o', 'o', 'a'] with frequencies: a = 4, o = 3, i = 2, e = 1.

	Sorting them in non-increasing order of frequency and placing them back into the vowel positions results in "aaaaoooiie".

Example 3:

Input: s = "baeiou"

Output: "baeiou"

Explanation:

	Each vowel appears exactly once, so all have the same frequency.

	Thus, they retain their relative order based on first occurrence, and the string remains unchanged.

Constraints:

	1 <= s.length <= 105

	s consists of lowercase English letters

## Full Solution Code
```cpp
class Solution {
public:
  string sortVowels(string s) {
    string g=s;
    int n=g.size(),f[256]={0},p[256],k=0;
    for(int i=0;i<256;i++)p[i]=-1;
    for(int i=0;i<n;i++){
      char c=g[i];
      f[c]++;
      if(p[c]==-1)p[c]=i;
    }
    vector<char> v;
    for(char c:g) if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v.push_back(c);
    sort(v.begin(),v.end(),[&](char a,char b){
      if(f[a]!=f[b])return f[a]>f[b];
      return p[a]<p[b];
    });
    for(int i=0;i<n;i++){
      char c=g[i];
      if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')g[i]=v[k++];
    }
    return g;
  }
};

```

## Synced At
May 13, 2026 at 10:54:14 AM UTC
