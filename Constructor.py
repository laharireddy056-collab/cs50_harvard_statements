class person:
    def __init__(self,name):
        self.name=name
        print("constructor called",self.name)
    def __del__(self):
        print("destructor called",self.name)
p1=person("Enhypen")
del p1
