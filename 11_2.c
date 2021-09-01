//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
#include<stdio.h>
int main()
{
    int a[3], i, max = 0;int sum=0;
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
       sum = sum + a[i];
    }
     
    printf("The maximum is %d", sum-max);
    return 0;
}