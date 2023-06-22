from random import randint
import os
class SymbolGenerator:
    
    def __init__(self):
        while True: 
               
            izvele=int(input("""1. cipars uz burto
2. burts uz cipars
3. aizstaj
4. iziet
"""))       
            
            match izvele:
                case 1:
                    os.system('cls')
                    self.cipars_uz_burtiem()
                case 2:
                    os.system('cls')
                    self.burts_uz_cipars()
                case 3:
                    os.system('cls')
                    izvele=int(input("""1. uz ASCII
2. no ASCII
"""))               
                    match izvele:
                        case 1:  
                            os.system('cls')       
                            self.uz_ascii()
                        case 2:
                            os.system('cls')
                            self.no_ascii()
                case 4:
                    break
            

    def burts_uz_cipars(self):
        self.inp=""
        self.inp=str(input("Ievadi simbolus => "))
        encodetais=self.inp.encode("windows_1257")
        self.listloop = []
        for char in encodetais:
            self.listloop.append(char)
        print(self.listloop)    

    def cipars_uz_burtiem(self):
        self.list = []
        self.n = int(input("ievadi n = "))

        for x in range (self.n):
            self.list.append(randint(32, 255))   

        print (self.list)

        self.burti = ''
        self.burti.encode("windows_1257")
        self.looplist = []
        for x in range (len(self.list)):
            self.burti = chr(self.list[x])
            self.looplist.append(self.burti)
        print(self.looplist)

    def uz_ascii(self):
        self.text=str(input("Ieavadi teksta rindu "))
        self.aizstajeji = {
            'ā': 'aa', 
            'ē': 'ee',
            'ī': 'ii',
            'ū': 'uu',
            'ķ': 'kj',
            'ļ': 'lj',
            'ņ': 'nj',
            'č': 'ch',
            'ģ': 'gj',
            'š': 'sh',
            'ž': 'zh',
            
            'Ā': 'Aa', 
            'Ē': 'Ee',
            'Ī': 'Ii',
            'Ū': 'Uu',
            'Ķ': 'Kj',
            'Ļ': 'Lj',
            'Ņ': 'Nj',
            'Č': 'Ch',
            'Ģ': 'Gj',
            'Š': 'Sh',
            'Ž': 'Zh'

        }
        for char, self.aizstajeji in self.aizstajeji.items():
            self.text = self.text.replace(char, self.aizstajeji)
        print(self.text)

    def no_ascii(self):
        self.text=str(input("Ieavadi teksta rindu "))
        self.aizstajeji = {
            'aaa': 'aā',
            'Aaa': 'Aā',
            'AAa': 'Aā',
            'AAA': 'Aā',

            'aa': 'ā',
            'ee': 'ē',
            'ii': 'ī',
            'uu': 'ū',
            'kj': 'ķ',
            'lj': 'ļ',
            'nj': 'ņ',
            'ch': 'č',
            'gj': 'ģ',
            'sh': 'š',
            'zh': 'ž',

            'Aa': 'Ā', 
            'Ee': 'Ē',
            'Ii': 'Ī',
            'Uu': 'Ū',
            'Kj': 'Ķ',
            'Lj': 'Ļ',
            'Nj': 'Ņ',
            'Ch': 'Č',
            'Gj': 'Ģ',
            'Sh': 'Š',
            'Zh': 'Ž',

            'AA': 'Ā', 
            'EE': 'Ē',
            'II': 'Ī',
            'UU': 'Ū',
            'KJ': 'Ķ',
            'LJ': 'Ļ',
            'NJ': 'Ņ',
            'CH': 'Č',
            'GJ': 'Ģ',
            'SH': 'Š',
            'ZH': 'Ž'
        }
        for char, self.aizstajeji in self.aizstajeji.items():
            self.text = self.text.replace(char, self.aizstajeji)
        print(self.text)


SymbolGenerator()