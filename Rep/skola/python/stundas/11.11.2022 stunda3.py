def show(arr):
    print ("array: ")
    for rows in arr:
        for elem in rows:
            print (elem, end = '\t')
        print ()
arr = []
rows=int(input("ievadi rows"))
cols=int(input("ievadi cols"))
for i in range(rows):
    row = []
    for j in range(cols):
        val=input(f"""enter [{i+1}],[{j+1}]
element of array:""")
        row.append(val)
    arr.append(row)
show (arr)
