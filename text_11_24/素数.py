#判断一个数是否为素数
num=int(input("请输入一个数："))
for i in range(2,num):
    if(num%i==0):
               print("%d不为素数"%num)
               break
    else:
          print("%d是素数"%num) 
