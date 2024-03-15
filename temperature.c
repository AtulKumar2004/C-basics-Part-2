#include <stdio.h>
int main()
{
float f,c;
printf("Enter the temperature in fahrenheit\n");
scanf("%f",&f);
c=(f-32)*5/9.0f;
printf("The corressponding temperature in celsius = %f\n",c);
}

