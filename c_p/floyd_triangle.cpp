#include<stdio.h>
int main(){
    int n;
    printf("Enter a numer for length of triangle:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0){
                if(j%2==0)printf("1 ");
                else printf("0 ");
            }else{
                if(j%2==0)printf("0 ");
                else printf("1 ");
            }
        }
        printf("\n");
    }
}