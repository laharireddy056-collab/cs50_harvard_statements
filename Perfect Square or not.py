import math
n=int(input("Enter a number-"))
root=math.isqrt(n)
if root*root==n:
    print("Perfect Square")
else:
    print("Not a perfect square")
