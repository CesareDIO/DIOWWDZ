year=int(input("输入一个整数年："))
if (year % 4 == 0 and year % 100!=0) or (year % 400 == 0):
    print("%d是润年"% year)
else :
    print("%d不是润年"% year)
