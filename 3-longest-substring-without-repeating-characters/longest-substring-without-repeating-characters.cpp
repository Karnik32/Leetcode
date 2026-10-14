class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char>window;

        int left = 0;
        int longestLength = 0;

        for(int right = 0; right < s.length(); right++){

            while(window.count(s[right])){
                window.erase(s[left]);
                left++;
            }

            window.insert(s[right]);

            longestLength = max(longestLength, right - left + 1);
        }
        return longestLength;
    }
};