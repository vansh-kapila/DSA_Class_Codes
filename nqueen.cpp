#include <iostream>
using namespace std;

bool isSafe(int arr[4][4], int x, int y){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<4){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int arr[4][4], int x){
    if(x==4){
        return true;
    }
    for(int col=0;col<4;col++){
        if(isSafe(arr, x, col)){   /* if the isSafe function returns true 
                                    it means it is safe to keep 1 in this column */
            arr[x][col]=1;

            if(nQueen(arr, x+1)){        // Recursion
                return true;            // Finction calling itself
            }

            arr[x][col]=0;            // Backtracking
        }
    }
    return false;
}

int main()
{
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=0;          /* Each element of array has been
                                    been initialized by 0 */
        }
    }
    if(nQueen(arr,0)){            // if nQueen is giving us true, we'll
                                  //  print our array
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }
    }
    return 0;
}