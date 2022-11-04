def modified_search(arr, x):
    low = 0
    high = len(arr) - 1
    mid = (high + low)//2
    while low <= high:
        if arr[mid] <= x:
            if mid == len(arr)-1:
                return mid
            elif arr[mid+1] <= x:
                low = mid + 1
            else:
                return mid
        else:
            high = mid - 1

        mid = (high + low)// 2
    return -1
def solution(lamps, points):
    start = []
    end = []
    ret = []
    for i in lamps:
        start += [i[0]]
        end += [i[1] +1 ]
    start.sort()
    end.sort()
    for j in points:
        ret += [modified_search(start, j) - modified_search(end, j)]

    return ret
        

print(modified_search([0,1,2,3,4,4,6,8,9], 9))
print(solution([[1,4],[5,7],[6,10],[7,13]], [1,5,6,7]))
