import math
x = float (input())
a = float (input())
g = (4*(18*a*a-31*a*x+6*x*x))/(-10*a*a+7*a*x+12*x*x)
f = (-1)*math.atan(5*a*a+2*a*x-3*x*x)
y = (math.log(-9*a*a+23*a*x+12*x*x+1))/math.log(2)
print(g)
print(f)
print(y)