#include<stdio.h>
#include<string.h>
void main(){
    char x[7]={"shreya"};
    int i;
    char temp;
    printf("%d",strlen(x));
    int l=strlen(x);
    for(i=0;i<l/2;i++){
        temp=x[i];
        x[i]=x[l-1-i];
        x[l-1-i]=temp;
    }
    printf("%s",x);
}