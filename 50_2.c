//จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความ แล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีสระอะไรบ้าง อย่างละกี่ตัว (Level 3)
#include<stdio.h>
int main(){
    char *p,s[10000];
    p = s;
    int a=0,e=0,i=0,o=0,u=0;
    scanf("%s",s);
    while(*p != '\0'){
        if(*p=='a'||*p=='A') a += 1;
        if(*p=='e'||*p=='E') e += 1;
        if(*p=='i'||*p=='I') i += 1;
        if(*p=='o'||*p=='O') o += 1;
        if(*p=='u'||*p=='U') u += 1;
        p++;
    }
    if(a>0)printf("a - %d\n",a);
    if(e>0)printf("e - %d\n",e);
    if(i>0)printf("i - %d\n",i);
    if(o>0)printf("o - %d\n",o);
    if(u>0)printf("u - %d\n",u);
    return 0;
}