#include <iostream>
#include <vector>   
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;

        int result = 0;

        for (int i = 0; i < n; i++) {
            vector<bool> vis(128, false);

            for (int j = i; j < n; j++) {   // substring usually goes from i to j
                if (vis[s[j]]) {
                    break;  // character already seen, break the inner loop
                }

                vis[s[j]] = true;
                result = max(result, j - i + 1);
            }
        }

        return result;
    }
};
