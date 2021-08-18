def binSearch(values,low,high,target):
    if low>high: return -1
    mid = (low+high)//2
    print("low is ->",low)
    print("mid is ->",mid)
    print("high is ->",high)
    if values[mid]==target:
        return mid
    elif values[mid]>target:
        return binSearch(values,low,mid-1,target)
    else:
        return binSearch(values,mid+1,high,target)

if __name__=="__main__":
    values=list(map(int,input("Enter the list > ").split()))
    target=int(input("Enter the target value > "))
    idx=binSearch(values,0,len(values)-1,target)
    if idx!=-1:
        print("Target was found at",idx)
    else:
        print("Target was not found")
