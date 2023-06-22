import math

x=float(input('1. mala'))
y=float(input('2. mala'))
z=float(input('3. mala'))
P=x+y+z
p=P/2
S=math.sqrt(p*(p-x)*(p-y)*(p-z))
print (S)