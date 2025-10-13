#include<stdio.h>
#include<string.h>
int main(){
      char str[]="hello";
      int freq[100]={0};
      int ln=strlen(str);
      for(int i=0;i<ln;i++){
        freq[str[i]]++;
      }
      for(int i=0;str[i]!='\0';i++){
        if(freq[i]>0){
            printf("%c: %d\n",i,freq[i]);
        }
      }
      int vCount=0;
      int cCount0;

      for(int i=0;i<ln;i++){
        char ch=str[i];
        if(ch=='a' || ch=='i' || ch=='o' || ch=='e' || ch=='u'){
            vCount++;
        }else{
            
        }
      }

      int count;
      for(int i=0; i<ln; i++){
        count = 0;
        for(int j=0;j<i;j++){
            if(str[i] == str[j]){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("%c",str[i]);
        }
      }
      return 0;
}