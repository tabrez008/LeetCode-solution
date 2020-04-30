class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        int i = 0;
        int n = prices.size();
        if (n == 0)
            return 0;
        while (i < n - 1)
        {
            int j = i + 1;
            while (j > 0 and j < n and prices[j - 1] >= prices[j])
                j++;
            int k = j;
            j--;
            while (k < n and prices[k] >= prices[k - 1])
                k++;

            k--;
            if (k < n and j < n)
                ans += prices[k] - prices[j];
            i = k + 1;
        }

        return ans;
    }
};
