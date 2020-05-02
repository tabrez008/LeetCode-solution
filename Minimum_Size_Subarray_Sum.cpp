class Solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int ans = INT_MAX;
        int temp = 0;
        int start = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            temp += nums[i];
            if (temp >= s)
            {
                while (start < i and temp - nums[start] >= s)
                {
                    temp -= nums[start];
                    start++;
                }
                ans = min(ans, i - start + 1);
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};