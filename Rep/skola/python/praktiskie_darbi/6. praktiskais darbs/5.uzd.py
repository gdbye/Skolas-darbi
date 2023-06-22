from random import *

skaitli=[]
y=0

for x in range (10):
     skaitli.insert(x, randint(-100, 100))
    
print (skaitli)

for a in range (10):
    if skaitli[a]<skaitli[y]:
        y=a

print(f"lowest value index {y}")
print (f"lowest value {skaitli[y]}")
