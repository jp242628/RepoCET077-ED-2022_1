//E)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char*palavra(char string[]);

int main(){
char string[50];


printf("Digite palavra ou frase: ");
gets(string);
printf("\n\n'%s'  ", string);
palavra(string);

return 0;
}
char*palavra(char string[]){
int i, j, tam, a = 0, contador = 0;   
  for(i=0; i < strlen(string); i++)
    if(string[i] == ' ') {
      for(j=i; j < strlen(string); j++)
                string[j] = string[j+1];
     }
        
    tam = strlen(string);
    tam--;

   while(tam >= a){
     if(string[a] != string[tam]) 
            contador ++;
               a++;
                 tam--;
    }
    
  if(contador == 0)
    printf("É um palindromo!\n");
  else
    printf("Não é um palindromo!\n");  

}