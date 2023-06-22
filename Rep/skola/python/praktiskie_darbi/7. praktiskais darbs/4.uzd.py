from random import randint

def printet(rows, cols):#izprinter
    for i in range(rows):
        for j in range(cols):
            print (arr[i][j], end="\t")
        print()

def randomarr(rows, cols):#ievada random vertibas
    for i in range (rows):
        col  = []
        for j in range(cols):
            col.append(randint(0,20))
        arr.append(col)
    return arr
    
def samekle(cols):#sameklesanas funkcijas
    p=0
    for i in range (len(arr)):
        #print(arr[i][cols])
        if arr[i][cols]<arr[p][cols]:
            p=i
    
    print (arr[p][cols])

while True:
    try:
        print("ja tiks ievadits negativs skaitlis tas tiks parveidots par pozitivu")
        x=int(input("ievadi rindu skaitu="))#ievada row
        y=int(input("ievadi kolonu skaitu="))#ievada cols
        arr=[]
        if x<0:
            x=-x
        if y<0:
            y=-y
        while True:
            print ("neraksti nulli")
            try:
                x=int(input("ievadi rindu skaitu="))#ievada row
                y=int(input("ievadi kolonu skaitu="))#ievada cols
            except:
                print("ievadi veselus skaitlus")
            else:
                
                Tf=bool(x>=1 and y>=1)
                if Tf==True:
                    break
                

    except:
        print("ievadi veselus skaitlus")
    else:
        randomarr(x, y)
        printet(x, y)
        while True:
            try:
                y=int(input("ievadi kolonu="))
                
                while True:

                    if y == 0:
                        print ("kolonna nevar but nulle")
                    elif y<0:
                        print ("kolonna nevar but negativs")
                    elif y>0:
                        break

                    try:
                        y=int(input("ievadi kolonu="))
                    except:
                        print ("ievadi veselu skaitli")
                    else:
                        if y==0:
                            print("nevadi nulli")
                        elif y<0:
                            print("nevadi negativus")
            except:
                print ("ievadi veselu skaitli")
            else:
                y-=1
                samekle(y)
                break
    break
