int sqrt_helper(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;

    int i = 1;
    while (i * i <= n) {
        if (i * i == n)
            return i;
        i++;
    }

    return -1;
}
