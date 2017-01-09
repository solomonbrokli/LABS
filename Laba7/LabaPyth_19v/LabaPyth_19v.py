import math


print("Хотите продолжить выполнение программы? 1-Да;2-Нет")
choice = int (input())


while choice == 1:
    a = float(input("Введите значение а: "))
    x_outset = float(input("Введите начальное значение x: "))
    x_end = float (input ("Введите конечное значение x:"))
    step = float (input ("Введите размер шага:"))
    i = 0
    x=x_outset

    T_result = open("/home/solomonbrokli/LABS/Laba7/LabaPyth_19v/T_result.txt", "w")
    while x_outset < (x_end+1):
        x=x_outset
        if (-10 * a * a + 7 * a * x + 12 * x * x) >= -0.00001 and (15 * a ** 2 + 29 * a * x + 12 * x ** 2) <= 0.00001:
                print("Не подлежит области определения")
        else:
            G = (4*(18*a*a-31*a*x+6*x*x))/(-10*a*a+7*a*x+12*x*x)



        if (5*a*a+2*a*x-3*x*x) < -1 and (5*a*a+2*a*x-3*x*x)>1:
                print("Не подлежит области определения")
        else:
                F = (-1)*math.atan(5*a*a+2*a*x-3*x*x)



        if (-9*a*a+23*a*x+12*x*x+1)>= -0.00001 and (-9*a*a+23*a*x+12*x*x+1)<=0.00001:
                print("Не подлежит области определения")
        else:
                Y = (math.log(-9 * a * a + 23 * a * x + 12 * x * x + 1)) / math.log(2)


        T_result.write('G= {:^15}'.format(G) + 'F = {:^15}'.format(F) + 'Y= {:15}'.format(Y)+ '\n')

        x_outset += step
    T_result.close()

    inputT_result= open("/home/solomonbrokli/LABS/Laba7/LabaPyth_19v/T_result.txt", "r")
    print(inputT_result.read() +'\n')
    inputT_result.close()

    print("Хотите продолжить выполнение программы? 1-Да;2-Нет")
    choice = int(input())

else:

    print("Error")






