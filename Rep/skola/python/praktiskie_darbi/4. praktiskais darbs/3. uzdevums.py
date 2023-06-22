a=float(input("ievadiet pirkuma summu? "))
if a>=500:
    b=a/100*25
    a=a-b
elif a>=200:
    b=a/100
    b=b*15
    a=a-b
print (f"jāmaksā ir {a}")