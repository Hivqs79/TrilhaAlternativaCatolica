#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1 - Construa um algoritmo que mostre a mensagem "Alo mundo" na tela.
void question1() {
  printf("Alo mundo");
}

//2 -  Construa um que peC'a um nC:mero e entC#o mostre a mensagem bO nC:mero informado foi  [nC:mero]b
void question2() {
  int num1;
  scanf("%i", &num1);
  printf("O numero informado foi %i", num1);
}

//3 - Construa um algoritmo que calcule a C!rea de um circulo.
void question3() {
  float radius;
  printf("Type the radius of a circle: ");
  scanf("%f", &radius);
  printf("The area of the circle is: %f", 2 * radius * M_PI);
}

//4 - Construa um algoritmo que converta metros para centC-metros.
void question4() {
  float meter;
  printf("Type a quantity in meter: ");
  scanf("%f", &meter);
  printf("The value converted in centimeters is: %.2f", meter * 100);
}

//5 - Construa um algoritmo que peC'a um nC:mero com 5 casas decimais e arredonde para duas.
void question5() {
  float floatNumber;
  printf("Type a number with decimal places: ");
  scanf("%f", &floatNumber);
  printf("The number rounded to two decimal places is %.2f", floatNumber);
}

//6 - Construa um algoritmo que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário. 
void question6() {
    float side;
    printf("Type the side of a square: ");
    scanf("%f", &side);
    float area = side*side;
    printf("The twice of the square area is: %f", 2 * area);
}
 

//7 - Construa um algoritmo que peça dois números, calcule e mostre a soma dos mesmos  
void question7() {
    float num1;
    float num2;
    printf("Type a number: ");
    scanf("%f", &num1);
    printf("Type another number: ");
    scanf("%f", &num2);
    printf("The sum of the two numbers is: %f", num1 + num2);
}
 

//8 - Construa um algoritmo que peça as 4 notas bimestrais e mostre a média, com uma casa decimal 
void question8() {
    float sum = 0;
    int quantNotes = 4;
    for (int i = 1; i <= quantNotes; i++) {
        float note;
        printf("Type the %i° note: ", i);
        scanf("%f", &note);
        sum += note;
    }
    printf("The average of the notes is: %.1f", sum / quantNotes);
}
 

//9 - Construa um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês. 
void question9() {
    float hourGain;
    float monthHours;
    printf("Type how many you gain by hour: ");
    scanf("%f", &hourGain);
    printf("Type how many hours do you work by month: ");
    scanf("%f", &monthHours);
    printf("You won %2.f by month", hourGain * monthHours);
}
 

//10 - Uma firma contrata um encanador a 25,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para o Imposto de Renda. 
void question10() {
    float workDayGain = 25;
    int daysWorked;
    printf("Type the quantity of days worked: ");
    scanf("%i", &daysWorked);
    printf("The net pay of the worker is: %f", (workDayGain * daysWorked) * 0.92 );
    
}


//11 - Construa um algoritmo que peça a temperatura em graus Farenheit(ºF), transforme e mostre na tela a temperatura em graus Celsius(ºC). C=5*(F-32)/9} 
void question11() {
    float celsius, farenheit;
    printf("Type a temperature in Farenheit: ");
    scanf("%f", &farenheit);
    celsius = 5*(farenheit-32)/9;
    printf("The temperature converted to Celsius is: %f", celsius);
    
}
 

//12 - Construa um algoritmo que peça uma temperatura em graus Celsius(ºC), transforme e mostre na tela a temperatura em graus Farenheit(ºF). 
void question12() {
    float celsius, farenheit;
    printf("Type a temperature in Celsius: ");
    scanf("%f", &celsius);
    farenheit = (celsius * 9 / 5) + 32;
    printf("The temperature converted to Farenheit is: %f", farenheit);
    
}
 

//13 - Construa um algoritmo que peça 2 números inteiros e um número real. Calcule e mostre: 
// a) o produto do dobro do primeiro com metade do segundo. 
// b) a soma do triplo do primeiro com o terceiro. 
// c) o terceiro elevado ao cubo. 
void question13() {
    int first, second;
    float third;
    printf("Type the first number (int): ");
    scanf("%i", &first);
    printf("Type the second number (int): ");
    scanf("%i", &second);
    printf("Type the third number (float): ");
    scanf("%f", &third);
    
    printf("The product of the first twice with the second half is: %f", (2 * first) * (second / 2));
}


//14 - Uma determinada empresa vende uma máquina que possui seis motores. Um de 20 CV, dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais respectivamente cada motor. Existe a necessidade de saber quantos motores deverão ser comprados de cada modelo e quanto custará esta compra. Para isto elabore um programa que:  
//a) Pergunte quantas máquinas serão vendidas;  
//b) Calcule e apresente na tela a quantidade de motores que deverão ser comprados de cada modelo;  
//c) Calcule e apresente na tela o custo total por máquina, o custo por tipo de motor e o custo total da compra. 

 
//15 - Elabore um programa para calcular a quantidade necessária de latas de tinta para pintar uma parede com X metros de largura por H metros de altura. Considere que o consumo de latas de tinta por metro quadrado é 3 litros e a quantidade de tinta por lata é 3,6 litros. 

int main(void) {
    question13();
    return 0;
}