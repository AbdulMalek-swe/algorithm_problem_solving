// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
     char ch[100];
     scanf("%s",ch);
     int k=0;
     for(int i=0; i<strlen(ch);i+=1){
         if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='u'||ch[i]=='o'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='U'||ch[i]=='O'){
             ch[i]=' ';
             continue;
         }else{
             ch[k]=ch[i];
             k++;
         }
     }
     char ch1[100];
    
     int n=0;
     for(int i=0;i<strlen(ch);i++){
         if(ch[i]>='A'&&ch[i]<='Z'){
              ch1[n]=ch[i]+32;
             n++;
         }
         else if(ch[i]>='a'&&ch[i]<='z' ){
             ch1[n]=ch[i];
             n++;
         }
     }
     ch1[n]='\0';
     char ch2[1000];
     int n1=0,n2=1;
   
     for(int i=0;i<k;i++){
         ch2[n1]='.';
         ch2[n2]=ch1[i];
         n1+=2;
         n2+=2;
     }
     ch2[n1]='\0';
  printf("%s",ch2);
    return 0;
}