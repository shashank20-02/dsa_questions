
{
    int n, k;
    cin >> n >> k;
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % k;
        rev = (rev * 10) + rem;
        n/=10;
    }
    cout << rem;
}