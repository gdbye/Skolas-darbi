from random import randint

Ssumma=0
Sreizinajums=1
skaitli=[]
pos=0
neg=0

for x in range (20):
    skaitli.insert(x, randint(-10, 10))

for x in range (10):
    Ssumma+=skaitli[x]

print (f"pirmo 10 skaitlu summa ir {Ssumma}")
print()

for y in range(10,20):
    Sreizinajums*=skaitli[y]

print (f"pedejo 10 skaitlu reizinajums ir {Sreizinajums}")
print ()

for z in range (20):
    if skaitli[z]>0:
        pos+=1
    if skaitli[z]<0:
        neg+=1

print(f"pozitivi ir {pos}")
print ()
print (f"nagativi ir {neg}")