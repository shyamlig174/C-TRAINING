#include<stdio.h>
#include<string.h>
int main(){
    int isTrue=1;
    for(int i=0;i<ln/2;i++){
        if(str[i]!=str[ln-i-1]){
            isTrue=0;
            break;
        }
    }
    if(isTrue==1){

    }
    char newStr[10];
    int ln= strlen(str);
    for(int i=0;str[i]!='\0';i++){
        newStr[i]=str[i];
        printf("%c\n",str[i]);
    }
    printf("%s",newStr);
}