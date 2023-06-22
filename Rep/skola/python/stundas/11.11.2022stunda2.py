from random import randint
arr=[]
rows=int(input("ievadi rows"))
cols=int(input("ievadi cols"))
for i in range (rows):
    col  = []
    for j in range(cols):
        col.append(randint(1,10))
    arr.append(col)
for i in range(rows):
    for j in range(cols):
        print (arr[i][j], end="\t")
    print()