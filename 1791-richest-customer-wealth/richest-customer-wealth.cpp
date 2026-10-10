class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;

        for (auto row : accounts) {
            int sum = 0;

            for (int money : row)
                sum += money;

            ans = max(ans, sum);
        }

        return ans;
    }
};