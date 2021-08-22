//ตู้ ATM จงเขียนการจ่ายเงินของตู้ ATM ว่าตู้ ATM จะจ่ายเงินออกมาในรูปแบบใด(Level 1)
#include<stdio.h>
int main(){
    int a ,b=0,c=0,d=0;
    scanf("%d",&a);
    if(a>=0&&a%100==0){

    for(int i=0;i<=a;i++){
        if(a>=1000){
            b+=1;
            a-=1000;
            
        }
        if(a>=500&&a<1000){
            c+=1;
            a-=500;
            
        }
        if(a>=100&&a<1000){
            d+=1;
            a-=100;
        }
    }
        printf("1000 * %d\n500 * %d\n100 * %d ",b,c,d);
    } else printf("ERROR");
}