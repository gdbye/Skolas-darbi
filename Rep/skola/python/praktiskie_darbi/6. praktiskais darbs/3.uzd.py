def line (length):
    y=0
    burti = []

    for i in ievade:
        burti.insert(y, '#')
        y+=1

    print(*burti, sep="")

ievade=input("ievadi tekstu>>>")
line(len(ievade))