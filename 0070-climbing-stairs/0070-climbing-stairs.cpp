class Solution {
public:
    int climbStairs(int n) {
            if (n <= 2) {
        return n;
    }

    int a = 1, b = 2, nextStep;
    for (int i = 3; i <= n; ++i) {
        nextStep = a + b;
        a = b;
        b = nextStep;
    }

    return b;
}

};