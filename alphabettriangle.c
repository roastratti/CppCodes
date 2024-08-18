#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            printf("#");
        }
        int a,d;
        a=1;
        for(int j=1; j<=i; j++){
            d=a+64;
            char ch= (char)d;
            printf("%c",ch);
            a=a+1;
        }
    printf("\n");
    }
    return 0;
}