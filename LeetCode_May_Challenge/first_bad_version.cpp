// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {

        int start = 1, end = n;
        while (start <= end)
        {
            long long mid = ((long)start + (long)end) / 2;
            if (isBadVersion(mid) == true and isBadVersion(mid - 1) == false)
                return (int)mid;
            else if (isBadVersion(mid) == true and isBadVersion(mid - 1) == true)
                end = (int)mid - 1;
            else if (isBadVersion(mid) == false and isBadVersion(mid + 1) == true)
                return (int)mid + 1;
            else
                start = (int)mid + 1;
        }

        return 0;
    }
};