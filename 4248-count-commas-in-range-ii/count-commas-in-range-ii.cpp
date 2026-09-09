class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0;

        if(n >= 1000)
            cnt += min(n, 999999LL) - 1000 + 1;

        if(n >= 1000000)
            cnt += 2 * (min(n, 999999999LL) - 1000000 + 1);

        if(n >= 1000000000)
            cnt += 3 * (min(n, 999999999999LL) - 1000000000 + 1);

        if(n >= 1000000000000)
            cnt += 4 * (min(n, 999999999999999LL) - 1000000000000LL + 1);

        if(n >= 1000000000000000)
            cnt += 5 * (n - 1000000000000000LL + 1);

        return cnt;
    }
};
