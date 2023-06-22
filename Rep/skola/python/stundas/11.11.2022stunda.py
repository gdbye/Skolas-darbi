rows, cols = 4, 4
arr = [[0]*cols]*rows
print ("array: ")
for i in range(rows):
    for j in range(cols):
        print (arr[i][j], end="\t")
    print()