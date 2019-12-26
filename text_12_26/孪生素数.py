a=[]
for num in range(2,100):
        for i in range(2,num):
            if (num % i) == 0:
                break
        else:
             a.append(num)
for j in range(len(a)):
    if a[j]-a[j-1]==2:
        print("%d和%d互为孪生素数"%(a[j-1],a[j]))
