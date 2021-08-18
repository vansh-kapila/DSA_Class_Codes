if __name__=="__main__":
    n = int(input("Enter the size of the array -> "))
    arr=list(map(int,input("Enter the elements -> ").strip().split()))
    print("Before sorting ->",arr)
    for i in range(n):
        idx=i
        for j in range(i,n):
            if arr[j]<arr[idx]:
                idx=j
        arr[i],arr[idx]=arr[idx],arr[i]
    
    print("After sorting ->",arr)
