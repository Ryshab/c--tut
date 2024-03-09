class Complex:
    real=0
    img=0
    def __init__(self):
        self.real=int(input("Enter the real number: "))
        self.img=int(input("Enter the imagninary number: "))
    def display(self):
        print(f"\nYour complex number is--> {self.real} + {self.img}i")
    def addreal(self,fx):
        # return self.real + fx.real
        self.real=self.real+fx.real
    def addimg(self,fx):
        # return self.img + fx.img
        self.img=self.img+fx.img
a=Complex()
b =Complex()
a.display()
b.display()
# print(f"{a.addreal(b)}+{a.addimg(b)}i")
a.addimg(b)
a.addreal(b)
a.display()