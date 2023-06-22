def add(n):
    S=1
    for i in range (2, n+1):
        if i % 2 == 0:
            S=S+1/i
        elif i % 2 == 1:
            S=S-1/i
    return S  
while True:      
    try:
        x=int(input("Ievadi skaitli>>>"))
    except:
        print("neraksti burtus")
    else:
        print(add(x))
        break