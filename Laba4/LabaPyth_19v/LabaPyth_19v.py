import math


print("Хотите продолжить выполнение программы? 1-Да;2-Нет")
choice = int (input())

while choice == 1:
    a = float(input("Введите значение а: "))
    x_outset = float(input("Введите начальное значение x: "))
    x_end = float (input ("Введите конечное значение x:"))
    step = float (input ("Введите размер шага:"))
    step_size = (x_end - x_outset)/step
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    Funcshion = int(input("Выберите функцию: "))
    i = 0
    x_size = []
    y_size = []

    if Funcshion == 1:
        while x_outset < x_end:
            x = x_outset
            if (-10 * a * a + 7 * a * x + 12 * x * x) >= -0.00001 and (15 * a ** 2 + 29 * a * x + 12 * x ** 2) <= 0.00001:
                print("Не подлежит области определения")
            else:
                G = (4*(18*a*a-31*a*x+6*x*x))/(-10*a*a+7*a*x+12*x*x)
                x_size.append(x)
                y_size.append(G)
            x_outset+=step
        min_Function=y_size[i]
        max_Function=y_size[i]
        while i<step:
            if y_size[i]<min_Function:
                min_Function = y_size[i]
            if y_size[i]>max_Function:
                max_Function = y_size[i]
            i+=1

    elif Funcshion == 2:
        while x_outset<x_end:
            x = x_outset
            if (5*a*a+2*a*x-3*x*x) < -1 and (5*a*a+2*a*x-3*x*x)>1:
                print("Не подлежит области определения")
            else:
                F = (-1)*math.atan(5*a*a+2*a*x-3*x*x)
                x_size.append(x)
                y_size.append(F)
            x_outset += step
        min_Function=y_size[i]
        max_Function=y_size[i]
        while i<step:
            if y_size[i]<min_Function:
                min_Function=y_size[i]
            if y_size[i]>max_Function:
                max_Function=y_size[i]
            i+=1

    elif Funcshion == 3:
        while x_outset < x_end:
            x = x_outset
            if (-9*a*a+23*a*x+12*x*x+1)>= -0.00001 and (-9*a*a+23*a*x+12*x*x+1)<=0.00001:
                print("Не подлежит области определения")
            else:
                Y = (math.log(-9*a*a+23*a*x+12*x*x+1))/math.log(2)
                x_size.append(x)
                y_size.append(F)
            x_outset += step
        min_Function = y_size[i]
        max_Function = y_size[i]
        while i < step:
            if y_size[i] < min_Function:
                min_Function = y_size[i]
            if y_size[i] > max_Function:
                max_Function = y_size[i]
            i+=1
    else:
        print("Error")
        break
    print("________________")
    print("|   X   |   Y   |")
    print("----------------")
    i = 0
    while i < step:
        print("|{}|{}|".format(x_size[i], y_size[i]))
        i += 1
    print("Максимальное значение функции =", max_Function)
    print("Минимальное значение функции=", min_Function)


    print("Хотите продолжить выполнение программы? 1-Да;2-Нет")
    choice = int (input())