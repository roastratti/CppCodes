#include<stdio.h>
int main(){
    int lastdigit,num,sum;
    for(int i=100;i<=500;i++){
        num=i;
        while(num>0){
            lastdigit=num%10;
            sum=sum+(lastdigit*lastdigit*lastdigit);
            num=num/10;
        }
        if(i==sum){
            printf("%d is armstrong number",i);
        }
    }
}