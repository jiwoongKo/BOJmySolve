name = input()
cnt = [0 for _ in range(26)]

for x in name:
    cnt[ord(x)-65] += 1

odd = 0
odd_alp = ''
alp = ''

for i in range(26):
    if cnt[i] % 2 == 1:
        odd += 1
        odd_alp += chr(i+65)
    alp += chr(i+65) * (cnt[i] // 2)

if odd > 1:
    print("I'm Sorry Hansoo")
else:
    print(alp+odd_alp+alp[::-1])
