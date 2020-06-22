#include <stdio.h>

int main(void) {
  float dinheiro = 280.0, preco_litro = 4.5;
  float litros = dinheiro / preco_litro;
  printf("O numero de litros abastecido é: %.2f\n", litros);
  
  float consumo = 12.0;
  float distancia = litros * consumo;
  printf("A distancia que você pode percorrer é: %.2f km", distancia);
  return 0;
}