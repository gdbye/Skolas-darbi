cements=float(197.898)
dienaterets=float(5)
x=0
while True:
    cements=cements-dienaterets
    dienaterets=dienaterets*1.2
    x+=1
    if cements<0:
        x-=1
        break
    if cements==0:
        break
print(f"Pietiks {x} dienām")