#Single Inheritance

class A:
    def one(self):
        print("This is base class")
class B(A):
    def two(self):
        print("This is derived class")
obj=B()
obj.one()
obj.two()


#Multi-level Inheritance

class A:
    def one(self):
        print("This is base class")
class B:
    def two(self):
        print("This is derived class")
class C(B):
    def three(self):
        print("This is another class")
obj=C()
obj.two()
obj.three()


#Multiple Inheritance

class father:
    def parent(self):
        print("This is father class")
class mother:
    def parent1(self):
        print("This is mother class")
class child(mother,father):
    def parchild(self):
        print("This is from father & mother class")
ch=child()
ch.parchild()


#Hybrid Inheritance

class animal:
    def sound(self):
        print("Animals make sound")
class mammal(animal):
    def make_sound(self):
        print("Mammals make sound")
class bird(animal):
    def makes_sound(self):
        print("Birds do the sounds")
class bat(mammal,bird):
    pass
obj=bat()
obj.make_sound()
obj.sound()
obj.makes_sound()
