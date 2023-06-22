#1. uzd
from os import*
atbilde=0
while True:
    print ("Kad LIDO uzsāka darbu?")
    print('''atbildes varianti:
        1)1854
        2)1987
        3)1999
        4)2004
        ''')
    try:
        atbilde=int(input("izvelies variantu\n")) 
        system("cls")
    except:
        print ("ievadi skaitli")  
    else:
        if 0<atbilde<5:    
            if atbilde==2:
                print ("pareizi")
                break
            if atbilde!=2:
                print ("nepareizi")
        else:
            print ("variants neder")
print ("beigas")