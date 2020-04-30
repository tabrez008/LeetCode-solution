class Solution
{
public:
    int countElements(vector<int> &arr)
    {
        map<int, int> map;
        for (auto x : arr)
            map[x]++;
        int ans = 0;
        for (auto x : map)
        {
            if (map.find(x.first + 1) != map.end())
            {
                ans += map[x.first];
            }
        }

        return ans;
    }
};