# 문자열 뒤집기

data = input()

num = 0

for i in range(len(data)-1):
    if data[i] != data[i+1]:
        num += 1

print(num/2)

