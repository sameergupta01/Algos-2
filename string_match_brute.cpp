#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

bool isMatch(string s1,string s2)
{
     int s1_len = s1.size();
     int s2_len = s2.size();
     if(s1_len == 0 && s2_len > 0)
     return false;
     if(s2_len == 0)
     return true;
     bool isM = true;
     for(int i=0;i<s1_len-s2_len;i++)
     {
             isM = true;
             int ii = i;
             for(int j=0;j<s2_len;j++)
             {
                     if(s1[ii] != s2[j])
                     {
                               isM = false;
                              break;
                              }
                              else
                              ii++;
                     }
                     if(isM)
                     return true;
                     
             }
             return false;
 };


int main()
{
    string s1 = "sameer is an excellent boy!!";
    string s2 = "excell";
    cout<<isMatch(s1,s2);
    cout<<getch();
    return 0;
}
