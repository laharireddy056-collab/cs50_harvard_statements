#File Not Found Error
try:
    open("Studentregistration.txt")
except FileNotFoundError:
    print("The file is not found")
finally:
    print("The code is excecuted succesfully")
    
#Index Error
try:
    A=[1,2,3,4]
    print(A[5])
except IndexError:
    print("Index is not in list")
finally:
    print("Code is executed succesfully")

#Key Error
try:
    B={"a":3}
    print(B["b"])
except KeyError:
    print("Key is not found")
finally:
    print("Code is executed succesfully")

#Value Error
try:
    print(int("Python"))
except ValueError:
    print("The given datatype is not correct")
finally:
    print("The code is excecuted succesfully")

#Name Error

try:
    Print("Python programming")
except NameError:
    print("The given name is not correct")
finally:
    print("The code is excecuted succesfully")


#Zero Division Error
try:
    a=10/0
    print(a)
except ZeroDivisionError:
    print("It cannot be divided by zero")
finally:
    print("The code is excecuted succesfully")


#Type Error
try:
    c="2"+4
    print(c)
except TypeError:
    print("The given type is not coorect")
finally:
    print("The code is excecuted succesfully")

    
