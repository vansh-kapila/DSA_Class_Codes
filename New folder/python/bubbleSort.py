if __name__=="__main__":
    n = int(input("Enter the size of the array -> "))
    array=list(map(int,input("Enter the elements -> ").strip().split()))
    print("Before sorting ->",array)
    for i in range(n):
        for j in range(n-1-i):
            # code for swapping elements using xor operation
            if array[j]>array[j+1]:
                array[j]^=array[j+1]
                array[j+1]^=array[j]
                array[j]^=array[j+1]
    print("After sorting ->",array)