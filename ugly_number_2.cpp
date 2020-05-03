class Solution
{
public:
    int nthUglyNumber(int n)
    {
        if (n == 0)
            return 0;
        vector<int> ans;
        ans.push_back(1);
        int indexA = 0, indexB = 0, indexC = 0;
        n--;
        while (n)
        {
            // get the minimum number among the multiple of all three numberes---
            int num = min(ans[indexA] * 2, min(ans[indexB] * 3, ans[indexC] * 5));
            if (num == (ans[indexA] * 2))
                indexA++;
            if (num == (ans[indexB] * 3))
                indexB++;
            if (num == (ans[indexC] * 5))
                indexC++;
            ans.push_back(num);
            n--;
        }
        return ans.back();
    }
};