#include <iostream>
#include <conio.h>

using namespace std;

void stringFilter(char s[])
{
     int len = strlen(s);
     if(len == 0 )
     return;
     
     bool isOne = true;
     int  j = 0;
     for(int i=0;i<len;i++)
     {
             if(s[i] == 'a' || s[i] == 'b')
             {
                     if(s[i] == 'a' || isOne)
                     isOne = false;
                     
                     }
                     else if( s[i] == 'c')
                     {
                          if(isOne)
                          {
                                   s[j++] = s[i];
                                   isOne = false;
                                   }
                      }
                      else
                      {
                          s[j++] = s[i];
             }
 };


/* Driver program to check above functions */
int main()
{
    char str1[] = "ad";
    stringFilter(str1);
    cout << str1 << endl;
 
    char str2[] = "acbac";
    stringFilter(str2);
    cout << str2 << endl;
 
    char str3[] = "aaac";
    stringFilter(str3);
    cout << str3 << endl;
 
    char str4[] = "react";
    stringFilter(str4);
    cout << str4 << endl;
 
    char str5[] = "aa";
    stringFilter(str5);
    cout << str5 << endl;
 
    char str6[] = "ababaac";
    stringFilter(str6);
    cout << str6 << endl;
    
    cout<<getch();
    return 0;
}
