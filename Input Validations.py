age=input("enter age")
if age.isdigit():
         age=int(age)
         print("valid age")
else:
         print("Invalid age")


n=int(input("Enter a number"))
if 1<n<10:
     print("Valid")
else:
     print("Invalid")


p=input("Enter password")
if len(p)>=6:
    print("Strong")
else:
    print("Weak")



mail=input("Enter mail")
if '@'in mail and '.'in mail:
    print("Valid mail")
else:
    print("Invalid mail")
