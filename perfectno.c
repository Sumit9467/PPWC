#include<stdio.h>
int main(){
    int a;
    printf("Enter a no\n");
    scanf("%d",&a);
    int s=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            s+=a;
        }
    }
    if(s==a && a!=0){
        printf("perfect no");
    }
    else{
        printf("Not a perfect no");
    }
    return 0;
}