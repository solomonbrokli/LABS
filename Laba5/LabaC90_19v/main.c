#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
    double x, a, G, F, Y, x1, x2, selection, step, i;
    char mF;
    char end[999], enter[100], check[100];
    long int g = 0, k = 0, l = 0 ;
    for (;;) {
        printf("Хотите ли вы продолжить выполнение программы?\n1-ДА\n2-НЕТ\n");
        scanf("%lf", &selection);
        if (selection == 1) {

            printf("введите значение -A-\n");
            scanf("%s", enter);
            a = atof(enter);
            getchar();
            memset(enter, 0, 100);

            printf("введите начальное значение -X-\n");
            scanf("%s", enter);
            x1 = atof(enter);
            getchar();
            memset(enter, 0, 100);

            printf("введите конечное значение -X-\n");
            scanf("%s", enter);
            x2 = atof(enter);
            getchar();
            memset(enter, 0, 100);

            printf("Введите размер шага\n");
            scanf("%s", enter);
            step = atof(enter);
            getchar();
            memset(enter, 0, 100);

            printf("Введите шаблон: ");
            scanf("%s", check);
            getchar();
            memset(enter, 0, 100);

            printf("Введите название функции G,F,Y\n");
            scanf("%s", &mF);
            getchar();
            memset(enter, 0, 100);
            memset(end, 0, 999);


            switch (mF) {
                case 'G':
                    for (i = x1; i < x2; i += step) {
                        x = i;
                        if (((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) >= 0.00001) ||
                            ((-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2)) <= -0.00001)) {
                            G = (4 * (18 * pow(a, 2) - 31 * a * x + 6 * pow(x, 2))) /
                                (-10 * pow(a, 2) + 7 * a * x + 12 * pow(x, 2));
                            sprintf(enter, "%lf", G);
                            strcat(end, enter);
                        } else
                            printf("Не возможно подсчитать значение функции,попробуйте заново\n");
                        printf("%s\n", end);
                        while (g < strlen(end)) {
                            if (strstr(end, check) - end + 1 < strlen(end)) {
                                k++;
                                g = strstr(end, check) - end + 1;
                                while (l != g) {
                                    end[l] = ' ';
                                    l++;
                                }
                                l = 0;
                            }
                            if (strstr(end, check) == 0)
                                break;
                        }
                        printf("Найдено совпадений : %ld\n", k);
                    }
                    break;


                case 'F':
                    for (i = x1; i < x2; i += step) {
                        x = i;
                        if (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) <= 1) ||
                            (((28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2)) >= -1))) {
                            F = sin(28 * pow(a, 2) + 53 * a * x + 24 * pow(x, 2));
                            sprintf(enter, "%lf", F);
                            strcat(end, enter);


                        } else
                            printf("Не возможно подсчитать значение функции,попробуйте заново\n");
                        printf("%s\n", end);
                        while (g < strlen(end)) {
                            if (strstr(end, check) - end + 1 < strlen(end)) {
                                k++;
                                g = strstr(end, check) - end + 1;
                                while (l != g) {
                                    end[l] = ' ';
                                    l++;
                                }
                                l = 0;
                            }
                            if (strstr(end, check) == 0)
                                break;
                        }
                        printf("Найдено совпадений : %ld\n", k);
                    }

                    break;
                case 'Y':
                    for (i = x1; i < x2; i += step) {
                        x = i;
                        if (((4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) >= 0.0001) ||
                            (4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) <= -0.0001) {
                            Y = log(4 * pow(a, 2) - 9 * a * x + 2 * pow(x, 2) + 1) / log(2);
                            sprintf(enter, "%lf", Y);
                            strcat(end, enter);
                        } else
                            printf("Не возможно подсчитать значение функции,попробуйте заново\nЗавершение программы\n");
                        printf("%s\n", end);
                        while (g < strlen(end)) {
                            if (strstr(end, check) - end + 1 < strlen(end)) {
                                k++;
                                g = strstr(end, check) - end + 1;
                                while (l != g) {
                                    end[l
                                    ] = ' ';
                                    l++;
                                }
                                l = 0;
                            }
                            if (strstr(end, check) == 0)
                                break;
                        }
                        printf("Найдено совпадений : %ld\n", k);
                    }
                        break;

                default:
                    printf("Неверно выбрана функция,попробуйте заново,выбрав при этом одну из функций G,F,Y\n");
            }
        }
else
            break;}

        return 0;
    }
