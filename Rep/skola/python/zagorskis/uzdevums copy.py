class Aizstaj:
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


Aizstaj()