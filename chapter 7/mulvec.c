int mulcnt = 0;

void mulvec(int *x, int *y, int *z, int n)
{
    int i;

    mulcnt++;

    for(i = 0; i < n; i++)
    {
        z[i] = x[i] * y[i];
    }
}