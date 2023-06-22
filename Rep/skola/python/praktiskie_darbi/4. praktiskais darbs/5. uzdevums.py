x=float(input(f"ievadi 1. nogriezni\n "))
y=float(input(f"ievadi 2. nogriezni\n "))
z=float(input(f"ievadi 3. nogriezni\n "))
a=(x, y, z)#izveido sarakstu
(sorted(a))#sakarto no mazākā uz lielāko
if a[2]>a[0]+a[1]:#dažadmalu trijstūrim
    print ("var")
elif a[2]==a[0]==a[1]:#vienādmalu
    print ("var")
elif a[2]==a[0]:#vienādsānu
    print ("var")
elif a[2]==a[1]:#vienādsānu
    print ("var")
elif a[1]==a[0]:#vienādsānu
    print ("var")
else:
    print ("nevar")