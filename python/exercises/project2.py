class Dictionary:
    dic={"Abnegation": "Denial; renunciation of a doctrine or belief",
        "Ambigue":"An ambiguous expression or statement",
        "Athleisure":"Comfortable and casual footwear & clothing designed for exercise and rigorous activity",
        "Broigus":"Angry or irritated"}
    def __init__(self):
        self.word=input("Enter your word: ")
    def meaning(self):
        for i in Dictionary.dic:
            if (self.word==i):
                print(Dictionary.dic[i])
                break
        else:
            print("invalid word")

a=Dictionary()
a.meaning()