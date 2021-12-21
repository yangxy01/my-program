class Solution {
public:
    int jumpFloorII(int number)
    {
        int num[20] = { 0 };
        num[0] = 1;
        for (int i = 2; i <= 20; i++)
        {
            num[i - 1] = 2 * num[i - 2];
        }
        return num[number - 1];
    }
};