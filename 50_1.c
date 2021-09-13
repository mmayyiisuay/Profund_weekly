//จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความ แล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีสระอะไรบ้าง อย่างละกี่ตัว (Level 3)
#include<stdio.h>
int main(){
    char s[10000];
    int a=0,e=0,i=0,o=0,u=0,n=0;
    scanf("%s",s);
    for(n = 0;n<=10000;n++)
    {
        if(s[n]=='\0'){
            break ;
        }
        if(s[n]=='a'||s[n]=='A'){
            a += 1;
        }
        if(s[n]=='e'||s[n]=='E'){
            e += 1;
        }
        if(s[n]=='i'||s[n]=='I'){
            i += 1;
        }
        if(s[n]=='o'||s[n]=='O'){
            o += 1;
        }
        if(s[n]=='u'||s[n]=='U'){
            u += 1;
        }
    }
    if(a>0)printf("a - %d\n",a);
    if(e>0)printf("e - %d\n",e);
    if(i>0)printf("i - %d\n",i);
    if(o>0)printf("o - %d\n",o);
    if(u>0)printf("u - %d\n",u);
    return 0;
}