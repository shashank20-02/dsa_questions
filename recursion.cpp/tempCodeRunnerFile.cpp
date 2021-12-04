if (q == 1)
    {
        long long sum = 0;
        for (int i = 0; i <= n; i++)
        {
            sum += i;
        }
        return sum % mod;
    }
    if (q == 2)
    {
        long long product = 1;
        for (int i = 0; i <= n; i++)
        {
            product *= i;
        }
        return product % mod;
    }