class Library:

    books=[]
    num=len(books)

    def addbook(self,name,author,year,price,serialnum):
        book_details=[name,author,year, price,serialnum]
        Library.books.append(book_details)

    def rembook(self,s):
        for i in range (len(Library.books)) :
            if not Library.books:
                print("Sorry! No books available")
            if Library.books[i][4]==s:
                del Library.books[i]
                # print(f"Book with serial number {s} was:\n{name}\nwritten by {author}\nreleased in {year}\nPrice {price} ")
                print("This book has been removed successfully")
                break
            else :
                continue
        print("Book not found")
        
    @staticmethod
    def display():
        print("These are all the books available")
        for i in range (len(Library.books)):
            print(f"\n\nTitle of the book : {Library.books[i][0]}")
            print(f"Author : {Library.books[i][1]}")
            print(f"Published in {Library.books[i][2]}")
            print(f"Price : {Library.books[i][3]}$")
            print(f"Serial number : {Library.books[i][4]}")

a=Library()
b=Library()
c=Library()
a.addbook("Crime and punishment","Fyodor Dostoevsky",1756,25,110001)
b.addbook("Atomic Habits","koi toh h",2014,14,110002)
c.addbook("Meditation","Marcus Aurelius",12000,5,110003)
a.display()
b=Library()
b.rembook(110002)
a.display()
print(a.__dict__)