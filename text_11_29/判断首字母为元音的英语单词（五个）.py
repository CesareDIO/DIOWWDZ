str="AEIOUaeiou"
a_list=[]
for i in range(0,5):
    word=input("请输入一个英语单词：")
    a_list.append(word)
print("输出的五个英文单词是：",a_list)
print("首字母是元音的英文英语单词有：")
for i in range(0,5):
    for ch in str:
        if a_list[i][0]==ch:
            print(a_list[i])
            break
