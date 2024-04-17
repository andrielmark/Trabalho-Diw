#include <stdio.h>

int main(void) {
  int x, q, resto;
  scanf("%d*c", &x);
  q = x/231;
  resto = x - (q*231);
  if(resto == 0){
    printf("O número é divisivel simultaneamente por 3, 7 e 11");
  }
  else{
    printf("O numero nao e divisivel simultaneamente pelos 3 numeros citados");
  }
  
  return 0;
}