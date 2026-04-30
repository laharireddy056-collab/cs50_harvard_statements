class bankaccount:
    def __init__(self,name,balance):
        self.name=name
        self.balance=balance
    def deposit(self,amount):
        self.balance=self.balance+amount
    def withdraw(self,amount):
        self.balance=self.balance-amount
    def display(self):
        print(self.name,"Balance is:",self.balance)
ba=bankaccount("cse",10000)
ba.deposit(1000)
ba.withdraw(500)
ba.display()



class python:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
    def display(self):
        print("My name is",self.name,"and my marks are:",self.marks)
p=python("Lahari",98)
p.display()
