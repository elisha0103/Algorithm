import sys
input = sys.stdin.readline

n = int(input().rstrip())
arr = []
for _ in range(n):
    x, y = map(str, input().rstrip().split())
    y = int(y)
    arr.append([x, y])

def low_sort(array):
    return array[1]

arr.sort(key = low_sort)

for i in arr:
    print(i[0], end=' ')
