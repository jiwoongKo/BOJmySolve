def tojava(text):
    if text[0] == "_" or text[-1] == "_" or "__" in text:
        return "Error!"

    ans=""
    flag=False    

    for i in text:
        if ord(i)>=65 and ord(i)<=90:
            return "Error!"

        if i == "_":
            flag = True
            continue

        if flag == True:
            ans += i.upper()
            flag=False
            continue

        ans+=i

    return ans
        
def toc(text):
    if ord(text[0])>=65 and ord(text[0])<=90:
        return "Error!"

    ans=""

    for i in text:
        if ord(i)>=65 and ord(i)<=90:
            ans+="_"+i.lower()
        else:
            ans+=i

    return ans


text = input()

if "_" in text:
    print(tojava(text))
else:
    print(toc(text))
