def unlimt(arr):
    a=max(arr)
    b=min(arr)
    print(a)
    print(b)
    return arr

arr=[]
n=int(input("please input the count of number in the list："))
for i in range (0,n):
    c=input("please input number：")
    arr.append(c)
print("\n")
unlimt(arr)
    

    
  
