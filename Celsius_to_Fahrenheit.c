/* programa para conversão de temperatura de Celsius para Fahrenheit */
#include <stdio.h>
/* Função auxiliar */
float converte (float c)
{
    float f;
    f = 1.8*c +32;
    return f;
}
int main(void){
    float t1;
    float t2;
    
    printf("Digite a temperatura em Celsius: "); // mostra mensagem para o usuário 
    scanf("%f", &t1); // captura valor entrado via teclado
    
    t2 = converte(t1); // converte o valor, chamando a função auxiliar 
    printf("Temperatura em Fahrenheit: %.f\n", t2); // exibe resultado
    
    return 0;
}
