import random

a= random.randint(0,100)
# print(a)
for i in range (5):
    
    print(f"\n\nYou have {5-i} guess left")
    n=int(input("Enter your guess :"))

    if (a==n):
        print("Congrats!!! You have guessed the number correctly")
        print(f"My number was {a}")
        print("You win")
        break

    elif ((5-i)==1):
        print(f"My number was {a}")
        print("You lost")
        break

    elif (a>n):
        print("My number is greater than your number. Try again")

    else :
        print("My number is smaller than your number. Try again")
