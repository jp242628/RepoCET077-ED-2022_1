//C)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
char*inverse(char s[]);

main(){
char string[50];       
printf("\nDigite uma string para ser invertido:");
gets(string);
inverse(string);
return 0;
}

char*inverse(char s[]){
int i, b;
char str[50];
b = strlen(s)-1;
    
for(i = 0; s[i] != '\0'; i++){
str[b] = s[i];
b--;}
str[i] = '\0';       
printf("\n\nA inversão fica:\n\n%s\n", str);
}