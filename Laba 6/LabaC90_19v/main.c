#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
    struct{/*Структура,хранящая значения функций*/
        double siz_G[100];
        double size_F[100];
        double size_Y[100];
    }struct1;
    double x,a,x1, x2,step,selection,i;
    char First[100],size[1];
    long int g = 0;
    for (;;) {
        printf("Хотите ли вы продолжить выполнение программы?\n1-ДА\n2-НЕТ\n");
        scanf("%lf", &selection);
        if (selection == 1) {

            printf("введите значение -A-\n");
            scanf("%s", First);
            a = atof(First);
            getchar();
            memset(First, 0, 100);

            printf("введите начальное значение -X-\n");
            scanf("%s", First);
            x1 = atof(First);
            getchar();
            memset(First, 0, 100);

            printf("введите конечное значение -X-\n");
            scanf("%s", First);
            x2 = atof(First);
            getchar();
            memset(First, 0, 100);

            printf("Введите размер шага\n");
            scanf("%s", First);
            step = atof(First);
            getchar();
            memset(First, 0, 100);

            size[0]=x1;
            size[1]=x2; /*массив из 2 ячеек,так как в дальнейшем значения могут изменится*/

            for (i = x1; i < x2; i += step) {
                x = i;
                if (((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) >= 0.00001) ||
                    ((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) <= -0.00001)) {
                    struct1.siz_G[g] = (4 * (18 * pow(a, 2) - 31 * a * x + 6 * pow(x, 2))) /
                                       (-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2));
                    printf("G= %f\n", struct1.siz_G[g]);
                    g++;
                } else
                    printf("Не возможно подсчитать значение функции,попробуйте заново\n");
            }

            g=0;
            x1=size[0];
            x2=size[1];
            for (i = x1; i < x2; i += step) {
                x = i;
                if (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) <= 1) ||
                    (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) >= -1))) {
                    struct1.size_F[g] = sin(28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2));
                    printf("F= %f\n", struct1.size_F[g]);
                    g++;
                } else
                    printf("Не возможно подсчитать значение функции,попробуйте заново\n");;
            }
            g=0;
            x1=size[0];
            x2=size[1];
            for (i = x1; i < x2; i += step) {
                x = i;
                if (((4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) >= 0.0001) ||
                    (4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) <= -0.0001) {
                    struct1.size_Y[g] = log(4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) / log(2);
                    printf("Y= %f\n", struct1.size_Y[g]);
                    g++;}
                 else
                    printf("Не возможно подсчитать значение функции,попробуйте заново\nЗавершение программы\n");
            }}
            else


            break;}


        return 0;
    }