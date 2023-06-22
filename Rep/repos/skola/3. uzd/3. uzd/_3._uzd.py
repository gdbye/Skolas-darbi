#Aprēķināt laukumu gredzenam
from math import*
d=float(input("ievadi iekšējo diametru "))
D=float(input("ievadi ārējo diametru "))
d=d/2
D=D/2
d=pi*d**2
D=pi*D**2
S=D-d#aprekina gredzena atnemot 
S="{:.2f}".format(S)#padara S tikai 2 ciparus aiz komatus
print (f"Gredzena laukums ir {S} ")