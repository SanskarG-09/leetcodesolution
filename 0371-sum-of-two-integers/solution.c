int getSum(int a, int b) {
    while(b != 0)
    {
        unsigned int c = (unsigned int) a & b;
        a = a ^ b;
        b = (int)(c << 1);
    }
    return a;
}
