#include <iostream>
#include <conio.h>
#include <string.h>

#define MASK 0x1F

using namespace std;

bool isRotation(char str1[],char str2[])
{

          char *str3 = new char(strlen(str2));
          strcpy(str3,str2);
      strcat(str3,str2);
               cout<<str2<<endl;
               cout<<str3<<endl;

               //cout<<strstr(str3,str1)<<endl;

     if(strstr(str3,str1))
     return true;
     else
     return false;
 };

int main()
{
    cout<<MASK<<endl;
   char str1[] = "ABACD";
   char str2[] = "CDABA";
   if(isRotation(str1,str2))
   cout<<"It's rotation"<<endl;
   else
   cout<<"It's different"<<endl;
    cout<<getch();
    return 0;
}
