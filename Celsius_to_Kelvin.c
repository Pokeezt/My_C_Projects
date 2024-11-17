#include<stdio.h>

float converte(float c){
    return c + 273.15; // Conversão de Celsius para Kelvin
}
/*
float converte(float c) {
    float k;
    k = c + 273.15;
    return k; 
} */ // Mesmo resultado, mas um pouco mais demorado

int main(void){
    float t1;
    float t2;
    
    printf("Digite a tempepratura em Celsius: ");
    scanf("%f", &t1);
    
    t2 = converte(t1);
    printf("Temperatura em Kelvin: %.2f\n", t2);
    
    return 0;
}
