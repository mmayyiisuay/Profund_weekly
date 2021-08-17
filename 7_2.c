//จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่ามากที่สุด lvl.1
#include <stdio.h>
int main()
{
    int a[3], i, max = 0;
    printf("Enter three numbers to find the maximum number:");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 3; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The maximum is %d", max);
    return 0;
}