# Python program for matrix addition using lists

# Matrix A
A = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]

# Matrix B
B = [[9, 8, 7],[6, 5, 4],[3, 2, 1]]

# Result matrix
result = [[0, 0, 0],[0, 0, 0],[0, 0, 0]]

# Matrix addition
for i in range(len(A)):
    for j in range(len(A[0])):
        result[i][j] = A[i][j] + B[i][j]

# Display result
print("Addition of two matrices:")
for r in result:
    print(r)
