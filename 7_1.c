//จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่ามากที่สุด lvl.1
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers to find the maximum number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("The maximum is %d",a);
    }
    else if (b>=a && b>=c){
        printf("The maximum is %d",b);
    }
    else if(c>=a && c>=b){
        printf("The maximum is %d",c);
    }
    return 0;
    
}