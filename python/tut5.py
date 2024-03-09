def greet(fx):
    def mfx(*args,**kwargs):
        print("Good morning everyone")
        fx(*args,**kwargs)
        print("Thanks for using this function")
    return mfx
@greet
def Hello():
    print("Hello World")

def add(a=5,b=9):
    print(f"The sum of the two numbers is: {a+b}")

Hello()
greet(add)(4,5)
greet(add(4,5))
    