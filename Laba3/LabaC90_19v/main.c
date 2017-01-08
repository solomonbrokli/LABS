#include <math.h>
#include <stdio.h>


int main() {
    double x,a,G,F,Y,x1,x2,selection,step,raz,i,G1,F1,Y1;
    char mF;
    for(;;){
        printf("Хотите ли вы продолжить выполнение программы?\n1-ДА\n2-НЕТ\n");
       scanf("%lf", &selection);
        if (selection == 1) {

            printf("введите значение -A-\n");
            scanf("%lf", &a);
            printf("введите начальное значение -X-\n");
            scanf("%lf", &x1);
            printf("введите конечное значение -X-\n");
            scanf("%lf", &x2);
            printf("Введите название функции G,F,Y\n");
            scanf("%s", &mF);
            printf("Введите размер шага\n");
            scanf("%lf", &step);
            printf("Введите разницу между функциями\n");
            scanf("%lf", &raz);

            switch (mF) {
                case 'G':
                    for(i=x1; i<x2; i+step) {
                        x=i;
                    if (((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) >= 0.00001) ||
                        ((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) <= -0.00001)) {
                        G = (4 * (18 * pow(a, 2) - 31 * a * x + 6 * pow(x, 2))) /
                            (-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2));
                        printf("%s%f\n","G = ", G);
                        G1 = (4 * (18 * pow(a, 2) - 31 * a * (x+step) + 6 * pow(x+step, 2))) /
                             (-10 * pow(a, 2) + 7 * a * (x+step) + 12 * pow(x+step, 2));
                        if (fabs(G1-G) < raz){
                            while(fabs(G1-G) < raz){
                                step*=2;
                                G1 = (4 * (18 * pow(a, 2) - 31 * a * (x+step) + 6 * pow(x+step, 2))) /
                                     (-10 * pow(a, 2) + 7 * a * (x+step) + 12 * pow(x+step, 2));}}
                     else {
                        printf("Не возможно подсчитать значение функции,попробуйте заново\n");

                    }}}
                    break;
                case 'F':
                    for(i=x1; i<x2; i+step) {
                        x=i;
                    if (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) <= 1) ||
                        (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) >= -1))) {
                        F = sin(28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2));
                        printf("%s%f\n","F = ", F);
                        F1= sin(28 * pow(a, 2) + 53 * a * (x+step) + 24 * pow((x+step), 2));
                        if (fabs(F1-F) < raz){
                            while(fabs(F1-F) < raz){
                                step*=2;
                                F1= sin(28 * pow(a, 2) + 53 * a * (x+step) + 24 * pow((x+step), 2));}
                    } else {
                        printf("Не возможно подсчитать значение функции,попробуйте заново\n");
                    }
                    break;}}
                case 'Y':
                    for(i=x1; i<x2; i+step) {
                        x=i;
                    if (((4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) >= 0.0001) ||
                        (4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) <= -0.0001) {
                        Y = log(4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) / log(2);
                        printf("%s%f\n","Y = ", Y);
                        Y1= log(4 * pow(a, 2) - 9 * a * (x+step) + 2 * pow((x+step), 2) + 1) / log(2);
                        if (fabs(Y1-Y) < raz){
                            while(fabs(Y1-Y) < raz){
                                step*=2;
                                Y1= log(4 * pow(a, 2) - 9 * a * (x+step) + 2 * pow((x+step), 2) + 1) / log(2);}
                    } else {
                        printf("Не возможно подсчитать значение функции,попробуйте заново\nЗавершение программы\n");
                    }
                    break;}}
                default:
                    printf("Неверно выбрана функция,попробуйте заново,выбрав при этом одну из функций G,F,Y\n");
                    break;}}
        else
            break;}
    return 0;
}