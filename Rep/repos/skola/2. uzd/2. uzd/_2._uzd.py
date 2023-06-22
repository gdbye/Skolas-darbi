#videjais aritmetiskais
x=float(input("ievadi 1. skaitli "))
y=float(input("ievadi 2. skaitli "))
z=float(input("ievadi 3. skaitli "))
vid=(x+y+z)/3#izreķina
vid="{:.2f}".format(vid)
print (f"Vidējais ir {vid}")