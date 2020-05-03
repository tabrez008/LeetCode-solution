class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> map, mag;
        for (auto c : ransomNote)
            map[c]++;

        for (auto c : magazine)
            mag[c]++;

        for (auto c : ransomNote)
            if (mag[c] < map[c])
                return false;

        return true;
    }
};