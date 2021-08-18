def binSearch(values,target):
    low=0
    high=len(values)-1
    while low<=high:
        print("low is ->",low)
        mid=int((low+high)/2)
        print("mid is ->",mid)
        print("high is ->",high)
        if values[mid]==target:
            return mid
        elif values[mid]>target:
            high=mid-1
        else:
            low=mid+1
    return -1

if __name__=="__main__":
    values=list(map(int,input("Enter the list > ").split()))
    target=int(input("Enter the target value > "))
    idx=binSearch(sorted(values),target)
    if idx!=-1:
        print("Target was found at",idx)
    else:
        print("Target was not found")
