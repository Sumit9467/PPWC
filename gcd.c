#include<stdio.h>
int main(){
    int a,b,gcd;
    printf("Enter 2 no\n");
    scanf("%d %d",&a,&b);
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    while(b!=0){
        gcd=b;
        b=a%b;
        a=gcd;
    }
    printf("Gcd is %d\n",gcd);
    return 0;
}