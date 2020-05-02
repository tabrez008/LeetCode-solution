class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        unordered_map<char, int> map;
        int cnt = 0;
        for (auto c : J)
            map[c] = 1;
        for (auto c : S)
            if (map.find(c) != map.end())
                cnt++;
        return cnt;
    }
};