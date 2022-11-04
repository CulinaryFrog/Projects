def solution(a):
    length = len(a)
    dic = {}
    for i in range(length):
        temp = []
        val = a[i]
        while val >0:
            
            temp += [val%10]
                 
            val = val//10
        temp.sort()
        tup = tuple(temp)
        
        if tup not in dic.keys():
            dic[tup] = 1
        else:
            dic[tup] += 1

    ret = 0

    for j in dic:
        ret += dic[j]*(dic[j]-1)/2
            
    print(dic)
    
        
    return ret

print(solution([25, 35, 872, 228, 53, 278, 872]))
