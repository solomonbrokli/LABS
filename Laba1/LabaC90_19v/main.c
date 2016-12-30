#include <stdio.h>
#include <math.h>

int main()
{
    double  x,a,G,F,Y;
    printf("Введите значение X\n");
    scanf("%lf",&x);
    printf("Введите значение A\n");
    scanf("%lf",&a);
    G =(4*(18*pow(a,2)-31*a*x+6*pow(x,2)))/(-10*pow(a,2)+7*a*x+12*pow(x,2));
    F = sin(28*pow(a,2)+53*a*x+24*pow(x,2));
    Y = log(4*pow(a,2)-9*a*x+2*pow(x,2)+1)/log(2);
    printf("G: %.6lf\n",G);
    printf("F: %.6lf\n",F);
    printf("Y: %.6lf\n",Y);
    return 0;
}