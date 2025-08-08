#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 1 - Construa um algoritmo que mostre a mensagem "Alo mundo" na tela.
void question1() {
  printf("Alo mundo");
}

// 2 -  Construa um que peC'a um nC:mero e entC#o mostre a mensagem bO nC:mero informado foi  [nC:mero]b

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

int main(void) {
    question10();
    return 0;
}