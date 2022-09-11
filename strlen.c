#include<stdio.h>
#include<string.h>
void main(){
    char x[7]={"aman"};
    int i;
    char temp;
    printf("%d",strlen(x));
    int k=strlen(x);
    for(i=0;i<k/2;i++){
        temp=x[i];
        x[i]=x[k-1-i];
        x[k-1-i]=temp;
    }
    printf("%s",x);
}
