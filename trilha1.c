/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
  scanf("%d", &num1);
  printf("O numero informado foi %d", num1);
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

void main() {
  question5();
}