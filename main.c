 #include <stdio.h>
    void foo(int (*ary)[3]);
    int main()
    {
        int ary[2][3];
        foo(ary);
    }
    void foo(int (*ary)[3])
    {
        int i = 10, j = 2, k;
        ary[0] = &i;
        ary[1] = &j;
        for (k = 0;k < 2; k++)
        printf("%d\n", *ary[k]);
    }