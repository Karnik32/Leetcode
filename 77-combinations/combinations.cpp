class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(int n, int k, int start, vector<int>& current) {

        // Combination complete
        if (current.size() == k) {
            ans.push_back(current);
            return;
        }

        for (int i = start; i <= n; i++) {

            // Choose
            current.push_back(i);

            // Explore
            backtrack(n, k, i + 1, current);

            // Undo
            current.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        backtrack(n, k, 1, current);
        return ans;
    }
};