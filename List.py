list1=[0,1,2,3,4,5]
list2=[6,7,8,9,10]
#Concatenate
print(list1+list2)
#Repetition
print(list2*3)
#Indexing
print(list1[2])
print(list2[-3])
#Slicing
print(list1[ :3])
print(list2[ : ])
print(list1[ : :-1])
#Membership
item=25
list1=list(range(1,30))
print(item in list1)


#List Methods
Clist=["Purple","Black","Magenta","Lavender"]
Clist.append("Red")
print(Clist)
Clist.insert(4,"Pink")
print(Clist)
Clist.remove("Pink")
print(Clist)
Clist.pop(1)
print(Clist)
Clist.sort()
print(Clist)
Clist.reverse()
print(Clist)
print(Clist.index("Purple"))
print(Clist.count("Lavender"))
Colourslist=Clist.copy
print(Colourslist)



#List Functions
list1=[0,1,2,3,4]
list2=[5,6,7,8,9]
print(len(list1))
print(min(list2))
print(max(list2))
print(sum(list1))
list1.extend([5,7])
print(list1)


#Nested List
a=[1,2,3,[4,5],6,7,8]
print(a)
print(len(a))







