#include <stdio.h>
#include <stdlib.h>
void BinToDecimal(int);

main(){
int num;

printf("Digite um número decimal: ");
scanf("%d", &num);
printf("\n\nO número %d convertido em binário fica:\n\n", num);
BinToDecimal (num);

return 0;
}

void BinToDecimal(int num){

int i;
for(i = 13; i >= 0; i--){    
if(num >> i & 1){
printf("1");
} 
else{
printf("0");
}
}

printf("\n");

}