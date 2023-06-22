def pow234(x):
    print(f"x²= {x**2}")
    print(f"x³={x**3}")
    print(f"x⁴={x**4}")
    print()
i=0
while True:
    try:
        x=int(input("ievadi x="))
    except:
        print("ievadi veselu skaitli")
    else:
        pow234(x)
        i+=1
        if i == 5:
            break