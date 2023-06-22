def kapinasana(kapinamais,pakape):
    Summa=kapinamais
    for x in range (pakape-1):
        Summa*=kapinamais
    return Summa

while True:   
    try:
        x=int(input("ievadi kapinamo="))
        y=int(input("ievadi pakapi="))
        while True:  
            if y>0:
                break
            print("ievadi pozitivu skaitli")
            y=int(input("ievadi pakapi="))
    except:
        print("ievadi veselus skaitlus")
    else:
        print(kapinasana(x, y))
        break