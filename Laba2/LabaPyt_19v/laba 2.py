import math

a = float(input("Введите значение а: "))
x = float(input("Введите значение x: "))

if ((-10*a*a+7*a*x+12*x*x) >= -0.00001 and (15*a**2+29*a*x+12*x**2) <= 0.00001) or ((5*a*a+2*a*x-3*x*x) < -1 and ((5*a*a+2*a*x-3*x*x) > 1) or ((-9*a*a+23*a*x+12*x*x+1)>= -0.00001 and (-9*a*a+23*a*x+12*x*x+1)<=0.00001)):
    print("Входные данные не подлежат области определения функции")
else:
    print("Вычислить функцию G - 1")
    print("Вычислить функцию F - 2")
    print("Вычислить функцию Y - 3")
    b = int(input("Выберите функцию: "))

    if b == 1:
        G = (4*(18*a*a-31*a*x+6*x*x))/(-10*a*a+7*a*x+12*x*x)
        print("G = ", G)
    elif b == 2:
        F = (-1)*math.atan(5*a*a+2*a*x-3*x*x)
        print("F = ", F)
    elif b == 3:
        Y = (math.log(-9*a*a+23*a*x+12*x*x+1))/math.log(2)
        print("Y = ", Y)
    else:
        print("Ошибка")