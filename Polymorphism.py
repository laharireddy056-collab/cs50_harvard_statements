#Method Overloading

class methover:
   def add(self,datatype,*args):
     if(datatype=='int'):
        answer=0
     if(datatype=='str'):
        answer=' '
     for x in args:
        answer=answer+x
     print(answer)
a=methover()
a.add('int',5,15)
a.add('str','computer','science')


#Method Overriding

class mother:
    def parent(self):
        print("This is base class")
class child(mother):
    def parent(self):
        super().parent()
        print("This is child class")
ch=child()
ch.parent()



class animal:
    def sound(self):
        print("Animals make sound")
class cat(animal):
    def sound(self):
        print("Cat makes the sound meow")
class dog(animal):
    def sound(self):
        print("Dogs bark")
c=cat()
c.sound()
d=dog()
d.sound()
