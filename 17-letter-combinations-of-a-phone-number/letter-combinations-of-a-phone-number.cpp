class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> phone = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string path;

        function<void(int)> backtrack = [&](int i) {
            if (i == digits.size()) {
                ans.push_back(path);
                return;
            }

            for (char c : phone[digits[i] - '0']) {
                path.push_back(c);
                backtrack(i + 1);
                path.pop_back();
            }
        };

        backtrack(0);
        return ans;
    }
};