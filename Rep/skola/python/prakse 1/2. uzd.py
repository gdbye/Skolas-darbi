import math

x = float(input('X: '))
y = float(input('Y: '))
while y==0:
    if y==0:
        print ("Y nevar būt nulle")
        y = float(input('Y: '))
    if y!=0:
        break
z = x/y


while True:

    try:
        ask = int(input('''
ievadi 1 vai 2
1) square root from x
2) z = x/y

>>> '''))
    except:
        print ("ievadi skaitli")
    else:
        if ask==1 or ask==2:
            break
        if ask!=1 and ask!=2:
            print("ievadi 1 vai 2")
            
            
    

if ask == 1:
    if x == 0:
        print('''X can't be 0, because It is not possible to devide with 0 and It is not possible to
        have a square root from 0''')
    if x != 0:
        print(math.sqrt(x))

elif ask == 2:
    print(z)