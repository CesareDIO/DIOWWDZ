#从键盘输入一个整数，判断该数字能否被 2 和 3 同时整除，能否被 2 整除，能否被 3 整除，不能被 2 和 3 整除。输出相应信息。
a=int(input("please input number:"))
if a%2==0 and a%3==0:
    print("能被2和3整除")
else:
    if a%2==0:
        print("能被2整除")
    else:
        if a%3==0:
            print("能被3整除")
        else:
            print("不能被2和3整除")
        
