# Two Sum

## Problem

Given an array of integers and a target integer, find two numbers in the array whose sum equals the target.

Return the two numbers if a valid pair exists, otherwise print "No solution".

### Input Format
- First line: an integer n — the size of the array
- Second line: n space-separated integers — the array elements
- Third line: an integer target — the target sum

### Output Format
- Two space-separated integers representing a pair from the array whose sum equals the target, or the string `No solution` if no such pair exists.

### Sample Input
```
5
2 7 11 15 3
9
```

### Sample Output
```
2 7
```

### Explanation
2 + 7 = 9 which equals the target.

## Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if(!(cin >> n)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    long long target;
    cin >> target;

    unordered_map<long long, int> seen; // value -> index
    for (int i = 0; i < n; ++i) {
        long long need = target - a[i];
        auto it = seen.find(need);
        if (it != seen.end()) {
            // print the pair (first found earlier value, current value)
            cout << need << " " << a[i];
            return 0;
        }
        seen[a[i]] = i;
    }

    cout << "No solution";
    return 0;
}
```

### Approach
1. Iterate through the array while maintaining a hash map of seen values.
2. For each element x, check if (target - x) was seen before.
3. If yes, output the pair; otherwise add x to the map and continue.

### Time Complexity
- O(n) where n is the number of elements in the array.

### Space Complexity
- O(n) additional space for the hash map.
