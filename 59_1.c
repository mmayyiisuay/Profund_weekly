//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
#include<stdio.h>
#include<string.h>
int main(){
    char a[999999];
    scanf("%s",a);
    for(int i = strlen(a) ; i >= 0  ; i--){
         printf("%c",a[i]);
    }
    return 0;
}