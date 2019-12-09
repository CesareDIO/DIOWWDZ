#选择排序
def selectionSort(arr):
    for i in range(len(arr)-1):
        #记录最小数索引
        minIndex+i
        for j in  range(i+1,len(arr)):
            if arr[j]<arr[minIndex]:
                minIndex=j
        # i不是小数时，将i和最小数经行交换
        if i!=minIndex:
            arr[i],arr[minIndex]=arr[minIndex],arr[i]
    return arr
                
