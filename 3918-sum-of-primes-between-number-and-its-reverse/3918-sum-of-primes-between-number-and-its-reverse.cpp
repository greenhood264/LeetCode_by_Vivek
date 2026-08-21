class Solution {
public:

    int reverseNumber(int n) {
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }

        return rev;
    }

    int sumOfPrimesInRange(int n) {

        int r = reverseNumber(n);

        int left = min(n, r);
        int right = max(n, r);

        // Sieve
        vector<bool> isPrime(right + 1, true);

        if (right >= 0)
            isPrime[0] = false;

        if (right >= 1)
            isPrime[1] = false;

        for (int i = 2; i * i <= right; i++) {

            if (isPrime[i]) {

                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int ans = 0;

        for (int i = left; i <= right; i++) {

            if (isPrime[i]) {
                ans += i;
            }
        }

        return ans;
    }
};
