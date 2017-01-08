#include <math.h>
#include <stdio.h>

int main() {
    double x, a, G, F, Y, x1, x2, selection, step, raz, i, min_m, max_m;
    int number_mas, first_mas,ct;
    char mF;
    for (;;) {
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
            number_mas = (int) (ceil(fabs(x2)-fabs(x1))/step);
            double G_mas[number_mas],Y_mas[number_mas],F_mas[number_mas];
            first_mas = 0;


            switch (mF) {
                case 'G':
                    for (i = x1; i < x2; i +=step) {
                        x = i;
                        if (((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) >= 0.00001) ||
                            ((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) <= -0.00001)) {
                            G = (4 * (18 * pow(a, 2) - 31 * a * x + 6 * pow(x, 2))) /
                                (-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2));
                            G_mas[first_mas] = G;
                            first_mas += 1;
                            min_m = G_mas[0];
                            max_m = G_mas[0];
                            for (ct=0;ct<first_mas;ct++){
                                if(G_mas[ct]<min_m)
                                    min_m= G_mas[ct];
                                if(G_mas[ct] > max_m)
                                    max_m = G_mas[ct];}
                            printf("____________________\n");
                            printf("|    X    |    Y    |\n");
                            printf("--------------------\n");
                            for(i=x1,ct=0;i<x2,ct<first_mas;i+=step,ct++)
                                printf("|%lf|%lf|\n",i,G_mas[ct]);

                        } else
                            printf("Не возможно подсчитать значение функции,попробуйте заново\n");

                    }
                    break;
                case 'F':
                    for (i = x1; i<x2; i += step) {
                        x = i;
                        if (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) <= 1) ||
                            (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) >= -1))) {
                            F = sin(28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2));
                            F_mas[first_mas] = F;
                            first_mas += 1;
                            min_m = F_mas[0];
                            max_m = F_mas[0];
                            for (ct=0;ct<first_mas;ct++){
                            if(F_mas[ct]<min_m)
                                min_m= F_mas[ct];
                            if(F_mas[ct] > max_m)
                                max_m = F_mas[ct];}
                            printf("____________________\n");
                            printf("|    X    |    Y    |\n");
                            printf("--------------------\n");
                            for(i=x1,ct=0;i<x2,ct<first_mas;i+=step,ct++)
                                printf("|%lf|%lf|\n",i,F_mas[ct]);
                        } else
                            printf("Не возможно подсчитать значение функции,попробуйте заново\n");
                    }
                    break;
                case 'Y':
                    for (i = x1; i < x2; i+=step) {
                        x = i;
                        if (((4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) >= 0.0001) ||
                            (4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) <= -0.0001) {
                            Y = log(4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) / log(2);
                            printf("%s%f\n", "Y = ", Y);
                            Y_mas[first_mas] = Y;
                            first_mas += 1;
                            min_m = G_mas[0];
                            max_m = G_mas[0];
                            for (ct=0;ct<first_mas;ct++){
                            if(G_mas[ct]<min_m)
                                min_m= Y_mas[ct];
                            if(Y_mas[ct] > max_m)
                                max_m = G_mas[ct];}
                            printf("____________________\n");
                            printf("|    X    |    Y    |\n");
                            printf("--------------------\n");
                            for(i=x1,ct=0;i<x2,ct<first_mas;i+=step,ct++)
                                printf("|%lf|%lf|\n",i,Y_mas[ct]);
                        } else
                            printf("Не возможно подсчитать значение функции,попробуйте заново\nЗавершение программы\n");
                    }
                    break;
                default:
                    printf("Неверно выбрана функция,попробуйте заново,выбрав при этом одну из функций G,F,Y\n");}
            printf("%s%lf\n","Mаксимальное значение функции = ", max_m);
            printf("%s%lf\n","Минимальное значение функции =", min_m);


        }


            break;}
    return 0;
}