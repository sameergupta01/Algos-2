#include <iostream>
#include <conio.h>

using namespace std;

void removeExtraSpaces(char s[])
{
     int len = strlen(s);
     char *d = s;
     if(len == 0)
     return;
     int j = 0;
     int i = 0;
     bool isSpace = false;
     while(d[j] != '\0')
     {
                if(d[j] == ' ')
                {
                        if(isSpace)
                        {
                                   j++;
                                   }
                                   else
                                   {
                                       s[i++] = s[j++];
                                       isSpace = true;
                                   }
                                   
                        }
                        else
                        {
                            s[i++] = d[j++];
                            isSpace = false;
                        }
                
                }
                s[i] = '\0';
     
 };

int main()
{
    char s[] = "Sameer is  a   good                        boy";
    removeExtraSpaces(s);
    cout<<s<<endl;
    cout<<getch();
    return 0;
}
