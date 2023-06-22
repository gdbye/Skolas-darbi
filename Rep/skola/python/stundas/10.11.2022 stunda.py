from random import *

def sentence(words):
    size=len(words)
    number=randint(0, size-1)
    word=words[number]
    return word


persona=["una", "dace", "karlis"]
darbiba=["perk", "brauc ar", "macas"]
objekts=["matematiku", "lauvu", "velosipedu"]
try:
    while True:
        teikums=sentence(persona) + "  " +\
            sentence(darbiba)+ " " +sentence(objekts)
        print (teikums)
        print()
        input("lai turpinatu spied enter bet lai beigtu ctrl+c un enter")
        print()
except KeyboardInterrupt:
    pass
