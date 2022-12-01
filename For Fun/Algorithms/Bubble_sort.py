def Bubble_sort(m):
    length = len(m)

    for i in range(length-1):
         for j in range(length-1-i):
            if m[j]>m[j+1]:
                m[j], m[j+1] = m[j+1],m[j]

    return m



arr = [64, 34, 25, 12, 22, 11, 90]
print(Bubble_sort(arr))

        

    
