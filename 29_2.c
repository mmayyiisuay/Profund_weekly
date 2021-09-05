//จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
#include<stdio.h>
int main(){
    float a[10],sum=0;
    for(int i = 0;i < 10; i++){
        printf("%d",i);
        scanf(" %f",&a[i]);
        sum = sum+a[i];
    }
    printf("average : %.2f",sum/10);
    return 0;
}