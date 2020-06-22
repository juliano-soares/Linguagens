#include <stdio.h>

int main(void) {
  float altura = 1.65, peso = 83.5, imc;

  // scanf("Digite sua altura: %f", &altura);
  // scanf("Digite seu peso: %f", &peso);
  imc = peso / (altura * altura);
  printf("Seu IMC é: %f\n", imc);
  
  return 0;
}