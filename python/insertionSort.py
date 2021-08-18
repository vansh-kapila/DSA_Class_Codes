if __name__=="__main__":
    n = int(input("Enter the size of the array -> "))
    arr=list(map(int,input("Enter the elements -> ").strip().split()))
    print("Before sorting ->",arr)
    for i in range(n):
        key = arr[i]
        j = i-1
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key

    print("After sorting ->",arr)