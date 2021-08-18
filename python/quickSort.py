def partition(arr,l,r):
    compare=arr[r]
    i=l-1
    for j in range(l,r):
        if arr[j]<compare:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]

    arr[i+1],arr[r]=arr[r],arr[i+1]
    return i+1        

def quickSort(arr,l,r):
    if l<r:
        pivot=partition(arr,l,r)
        quickSort(arr,l,pivot-1)
        quickSort(arr,pivot+1,r)

if __name__=="__main__":
    n = int(input("Enter the size of the array -> "))
    arr=list(map(int,input("Enter the elements -> ").strip().split()))
    print("Before sorting ->",arr)
    quickSort(arr,0,n-1)
    print("After sorting ->",arr)