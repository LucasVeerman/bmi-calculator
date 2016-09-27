#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>;
void main()
{
float w,h,bmi;
printf("wat is je gewicht in kg bijvoorbeeld 70?  ");
scanf("%f",&w);
printf("Wat is je lengte bijvoorbeeld 1.80   ");
scanf("%f",&h);
bmi=w/(h*h);
printf("bmi: %f",bmi);
bmi<18.5?printf("  Je gewicht is te laag"):(bmi<25)?printf("  Je gewicht is normaal"):printf("  Je bent te dik");
}
