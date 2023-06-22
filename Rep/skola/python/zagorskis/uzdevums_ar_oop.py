from random import randint

class Darbs():
    def __init__ (self):
        self.inp()
        self.arr_izveide()
        self.random_ievade()
        self.arr_print()
        self.sort()
        self.skiro()
        self.arr_unik_kop_print()
        self.summas()
    
    def inp(self):
        self.izmers=int(input("izmers=> "))
        self.min=int(input("min=> "))
        self.max=int(input("max=> "))

    def arr_izveide(self):
        self.arr = list(range(self.izmers))
        self.arr_unik = list()
        self.arr_kop = list()

    def random_ievade(self):
        for i in range(self.izmers):
            self.arr[i-1] = randint (self.min, self.max)

    def sort(self):
        self.arr.sort()
    
    def arr_print(self):
        print("array")
        print(self.arr)

    def arr_unik_kop_print(self):
        print("Unikalas")
        print(self.arr_unik)
        print("Kopijas")
        print(self.arr_kop)
        

    def skiro(self):
        for i in self.arr:
            if i not in self.arr_unik:
                self.arr_unik.append(i)
            else:
                self.arr_kop.append(i)
    

    def summas(self):
        summa1 = 0
        summa2 = 0
        for i in self.arr_unik:
            summa1+=i
        for i in self.arr_kop:
            summa2+=i

        print ("summa unikalajam == ", summa1)
        print ("summa kopijam == ", summa2)
        


Darbs()