import math
import sys
from matplotlib import pyplot as plt

print("Хотите продолжить выполнение программы? 1-Да;2-Нет")
choice = int (input())

while choice == 1:
    a = float(input("Введите значение а: "))
    x_outset = float(input("Введите начальное значение x: "))
    x_end = float (input ("Введите конечное значение x:"))
    step = float (input ("Введите размер шага:"))
    distance = float (input ("Введите разницу между функциями:"))
    x_size = []
    y_size = []
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    Funcshion = int(input("Выберите функцию: "))

    if Funcshion == 1:
        while x_outset<x_end:
            x = x_outset
            if (-10 * a * a + 7 * a * x + 12 * x * x) >= -0.00001 and (15 * a ** 2 + 29 * a * x + 12 * x ** 2) <= 0.00001:
              print("Не подлежит области определения")
            else:
                G = (4*(18*a*a-31*a*x+6*x*x))/(-10*a*a+7*a*x+12*x*x)
                print("G = ", G)
                x_size.append(x)
                y_size.append(G)
                x_outset+=step
                plt.title('G')

    elif Funcshion == 2:
        while x_outset<x_end:
            x = x_outset
        if (5*a*a+2*a*x-3*x*x) < -1 and (5*a*a+2*a*x-3*x*x):
            print("Не подлежит области определения")
        else:
            F = (-1)*math.atan(5*a*a+2*a*x-3*x*x)
            print("F = ", F)
            x_size.append(x)
            y_size.append(F)
            x_outset += step
            plt.title('F')

    elif Funcshion == 3:
        while x_outset < x_end:
            x = x_outset
        if (-9*a*a+23*a*x+12*x*x+1)>= -0.00001 and (-9*a*a+23*a*x+12*x*x+1)<=0.00001:
            print("Не подлежит области определения")
        else:
            Y = (math.log(-9*a*a+23*a*x+12*x*x+1))/math.log(2)
            print("Y = ", Y)
            x_size.append(x)
            y_size.append(Y)
            x_outset += step
            plt.title('Y')
    else:
        print("Error")
        break

    plt.plot(x_size, y_size, 'bo-')
    plt.xlabel('X')
    plt.ylabel('Y')
    plt.grid(True)
    plt._show()

    print("Хотите продолжить выполнение программы? 1-Да;2-Нет")
    choice = int (input())
