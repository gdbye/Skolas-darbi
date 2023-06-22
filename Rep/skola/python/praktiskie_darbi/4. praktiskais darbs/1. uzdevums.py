from math import*
x=float(input("ievadi X\n"))
if x>0:
    a=sqrt((3*x+2)**3-24*x)
    b=3*sqrt(x)
    c=2/sqrt(x)
    b=b-c
    y=a/b
else:
    a=2*x
    b=3-x
    b=b/4
    y=a-b
print(y)