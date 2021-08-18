if __name__=="__main__":
    n = int(input("Enter the size of the array -> "))
    array=list(map(int,input("Enter the elements -> ").strip().split()))
    target=int(input("Enter the target value -> "))
    for i in range(n):
        if array[i]==target:
            print("Element found at",i)
            quit()
    print("Element not found")
