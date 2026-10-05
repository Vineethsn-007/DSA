# Reverse Words in a String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an input string `s`, reverse the order of the  **words**.

A  **word**  is defined as a sequence of non-space characters. The  **words**  in `s` will be separated by at least one space.

Return  *a string of the words in reverse order concatenated by a single space.* 

 **Note**  that `s` may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

 **Example 1:** 

```
Input: s = "the sky is blue"
Output: "blue is sky the"

```

 **Example 2:** 

```
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

```

 **Example 3:** 

```
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

```

 

 **Constraints:** 

- 1 <= s.length <= 104
- s contains English letters (upper-case and lower-case), digits, and spaces ' '.
- There is at least one word in s.

 

 **Follow-up:** If the string data type is mutable in your language, can you solve it  **in-place**  with `O(1)` extra space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.5 MB (beats 45.88%)  
**Submitted:** 2026-10-05T16:27:47.864Z  

```cpp
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string answer="";
        for(int i=0;i<s.length();i++){
            string word="";
            while(i<s.length() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                answer+=" "+word; 
            }
            
        }
        return answer.substr(1);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-words-in-a-string/)