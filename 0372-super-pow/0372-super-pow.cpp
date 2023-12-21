class Solution {
public:
    const int MOD = 1337;

    int powMod(int a, int b) {
        int result = 1;
        a = a % MOD;

        while (b > 0) {
            if (b % 2 == 1) {
                result = (result * a) % MOD;
            }
            a = (a * a) % MOD;
            b /= 2;
        }

        return result;
    }

    int superPow(int a, vector<int>& b) {
        if (b.empty()) {
            return 1;
        }

        int lastDigit = b.back();
        b.pop_back();

        int part1 = powMod(a, lastDigit);
        int part2 = powMod(superPow(a, b), 10);

        return (part1 * part2) % MOD;
    }
};
