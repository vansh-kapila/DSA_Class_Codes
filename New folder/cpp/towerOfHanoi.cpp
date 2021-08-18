#include <iostream>
#define space ' '
#define newline endl
using namespace std;

void Hanoi(int n, char src,char help,char dest)
{
    if (n == 1){
		cout << src << " -> " << dest << newline;
		return;
	}
	Hanoi(n - 1,src,dest,help);
	cout << src << " -> " << dest << newline;
	Hanoi(n - 1,help,src,dest);
}

int main()
{
	int n = 3; 
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}
