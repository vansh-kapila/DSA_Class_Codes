def Hanoi(n,src,help,dest):
    if n==1:
        print(src,'->',dest)
        return
    Hanoi(n-1,src,dest,help)
    print(src,'->',dest)
    Hanoi(n-1,help,src,dest)

if __name__== "__main__":
    n=4
    Hanoi(n,'A','B','C')