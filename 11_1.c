//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        a = 0;
    }
    if(b>=a && b>=c){
        b = 0;
    }
    if(c>=a && c>=b){
        c = 0;
    }
    printf("%d",a+b+c);

    return 0;
}