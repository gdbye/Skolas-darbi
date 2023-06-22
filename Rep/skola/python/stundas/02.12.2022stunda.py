txt = input('ievadi tekstu: ')
words = list() #words[]
txt = txt.lower().split(' ') #txt is list
print("teksts: ", *txt)

for elem in txt:
    if elem[0] == elem[-1]:
        words.append(elem)

print("vardi: ", *words)
print("vardu skaits; ",len(words))
