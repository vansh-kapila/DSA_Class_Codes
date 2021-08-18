def merge(arr,mid,l,r):
    n1=mid-l+1
    n2=r-mid
    a,b=[0]*n1,[0]*n2
    for i in range(n1):
        a[i]=arr[l+i]
    
    for i in range(n2):
        b[i]=arr[mid+i+1]

    i,j,k=0,0,l
    while i<n1 and j<n2:
        if a[i]>b[j]:
            arr[k]=b[j]
            j+=1
            k+=1
        else:
            arr[k]=a[i]
            i+=1
            k+=1
    while i<n1:
        arr[k]=a[i]
        k+=1
        i+=1
    while j<n2:
        arr[k]=b[j]
        k+=1
        j+=1

def mergeSort(arr,l,r):
    if l<r:
        mid=(l+r)//2
        mergeSort(arr,l,mid)
        mergeSort(arr,mid+1,r)
        merge(arr,mid,l,r)
if __name__=="__main__":
    n = int(input("Enter the size of the array -> "))
    arr=list(map(int,input("Enter the elements -> ").strip().split()))
    print("Before sorting ->",arr)
    mergeSort(arr,0,n-1)
    print("After sorting ->",arr)