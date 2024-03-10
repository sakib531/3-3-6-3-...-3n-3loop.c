#include<stdio.h>
int main (){
    int x=3,y,n,sum=0;
    //printf("number : ");
    //scanf("%d",&x);
    printf("power : ");
    scanf("%d",&n);
    for (y=1; y<=n; y++){
        for(x;x<=3*n;x=x+3){
            printf("%d\n",x*x*x);
            sum=sum+x*x*x;
        }
    }
    printf("the sum of numbers  : \n");
    printf("%d\n",sum=sum);
    return 0;
}
