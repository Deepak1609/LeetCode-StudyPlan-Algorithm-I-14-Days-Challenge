class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            // init to -1 since we assume each char exist on -1 position
        vector<int> v(128, -1); 
        int ans = 0;
        int start = 0;
        int i;
        for (i = 0; i < s.length(); i++) {
            if (v[s[i]] < start) {  // not exist or is before the start pointer
                v[s[i]] = i;  // update the char position
            } else {  // if exist
                ans = max(i - start, ans);
                start = v[s[i]] + 1;  // move start pointer to next char
                v[s[i]] = i;  // update current char position
            }
        }
        ans = max(ans, i - start);  // check the last substring
        return ans;
        
    }
};
