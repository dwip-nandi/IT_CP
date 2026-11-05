#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s", str);
    int l=strlen(str),t=0;
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            t=1; break;
        }
    }
    if(t==0)printf("The %str is a palindrom.",str);
    else printf("The %str is not a palindrom",str);
}

