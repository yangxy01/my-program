class Gift {
public:
    int getValue(vector<int> gifts, int n)
    {
        int count = 0;
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            if (count == 0)
            {
                val = gifts[i];
                count++;
                continue;
            }
            if (val == gifts[i])
                count++;
            else
                count--;
        }
        for (int i = 0; i < n; i++)
        {
            if (val == gifts[i])
                count++;
        }
        count--;
        if (count > n / 2)
            return val;
        else
            return 0;
    }
};