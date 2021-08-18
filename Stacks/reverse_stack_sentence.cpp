#include <iostream>
#include <stack>
using namespace std;

int main()
{  stack<char> st;
   string str;
   str="Hello World";
   for(int i=0;i<str.length();i++)
   {
       st.push(str[i]);
   }

   for(int i=0;i<str.size();i++)
   {
       cout<<st.top();
       st.pop();
   }
    
}