//ตู้ ATM จงเขียนการจ่ายเงินของตู้ ATM ว่าตู้ ATM จะจ่ายเงินออกมาในรูปแบบใด(Level 1)
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    
    if(a%100==0&&a>=0){
        b=a/1000;
        a=a-b*1000;
        
        c=a/500;
        a=a-c*500;
        
        d=a/100;
        printf("1000 * %d\n500 * %d\n100 * %d ",b,c,d);       
    }
    else printf("ERROR");
    
}