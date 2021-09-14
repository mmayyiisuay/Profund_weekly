//จงเขียนโปรแกรมเพื่อรับข้อมูลเป็น string ไปเรื่อยๆ จนกว่าจะพิมพ์เครื่องหมาย . หลังจากนั้นให้จัดเก็บข้อมูลลงในไฟล์ชื่อ c:\temp\data.txt ดังตัวอย่าง (Level 4)
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *a;
    char s[10000];
    int x = 0;
    a = fopen("C:\\temp\\data.txt", "w+");
    printf("Input data string:\n");
    while (1)
    {
        scanf("%s", s);
        x=strlen(s)-1;
        fprintf(a, s);
        fprintf(a, "\n");
        if (s[x] == '.')
        {
            break;
        }
    }
    fclose(a);
    return 0;
}