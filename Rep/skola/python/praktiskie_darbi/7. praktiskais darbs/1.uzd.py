def min (x, y, z):
    if x<y and x<z:
        return x
    if y<x and y<z:
        return y
    if z<y and z<x:
        return z
def max (x, y, z):
    if x>y and x>z:
        return x
    if y>x and y>z:
        return y
    if z>y and z>x:
        return z
while True:
    try:
        x=int(input("Ievadi x="))
        y=int(input("Ievadi y="))
        z=int(input("Ievadi z="))
    except:
        print("ievadi veselus skaitlus")
        
    else:
        summa=(max(x,y,z) / max(x,y,z) ** 2) + (min(x,y,z) / min(x,y,z) ** 2)
        print(summa)
        break