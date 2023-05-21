#include<stdio.h>
void towerOfHanoi(int n, char x, char y, char z)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", x, y);
        return;
    }
    towerOfHanoi(n-1, x,z,y);
    printf("\n Move disk %d from rod %c to rod %c", n,x, y);
    towerOfHanoi(n-1, z, y, x);
}

int main()
{
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
    }
