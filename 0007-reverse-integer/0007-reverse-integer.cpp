class Solution {
public:
    int reverse(int x) {
        int r = 0, rm = 0;
        while (x != 0) {
            rm = x % 10;

            if (r > 214748364 || (r == 214748364 && rm > 7))
                return 0;

            if (r < -214748364 || (r == -214748364 && rm < -8))
                return 0;

            r = (r * 10) + rm;
            x = x / 10;
        }

        return r;
    }
};