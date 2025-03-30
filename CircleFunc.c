#include <stdio.h>

float afun(float);
float cfun(float);
float dfun(float);

int main()
{
	float rad, dia, area, cir;
	
	printf("Enter radius of circle: ");
	scanf("%f", &rad);

	dia = dfun(rad);
	area = afun(rad);
	cir = cfun(rad);

	printf("\nDiameter = %.2f", dia);
	printf("\nArea = %.2f", area);
	printf("\nCircumference = %.2f", cir);

	return 0;
}
float dfun(float rad)
{
	return (2*rad);
}
float afun(float rad)
{
	return (3.14*rad*rad);
}
float cfun(float rad)
{
	return (6.28*rad);
}
	