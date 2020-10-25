#include<stdio.h>
int main(){
    char s[30];
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=' ')
            s[i]=s[i]-'a'+'A';
    }
    puts(s);
}