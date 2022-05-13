# 만들 수 없는 금액

n = int(input())
data = list(map(int, input().split()))
data.sort()

target = 1
for x in data:
    if target < x:      # 만들 수 없는 금액을 찾았을 때 종료
        break
    target += x

print(target)