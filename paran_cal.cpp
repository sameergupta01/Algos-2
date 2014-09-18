#include <iostream>
#include <conio.h>
#include <stack>

using namespace std;


bool checkParan(char s[])
{
     stack<char> st;
     int i=0;
     while(s[i] != '\0')
     {
                if( s[i] == '[' || s[i] == '{' || s[i] == '(')
                st.push(s[i]);
                if( s[i] == ']' || s[i] == '}' || s[i] == ')')
                {
                    if(st.size() == 0)
                    return 0;
                    if(s[i] == ']')
                    {
                            if(st.top() != '[')
                            return false;
                            else
                            st.pop();
                            }

                    if(s[i] == '}')
                    {
                            if(st.top() != '{')
                            return false;
                            else
                            st.pop();
                            }
                            
                            
                            
                            
                    if(s[i] == ')')
                    {
                            if(st.top() != '(')
                            return false;
                            else
                            st.pop();
                            }                                                       
                            
                }
                i++;
                }
   if(st.size() != 0)
                return false;

     return true;
 }


int main()
{
    char s[] = "[(])" ;
    cout<<"Paran: "<<checkParan(s)<<endl; 
    cout<<getch();
    return 0;
}
