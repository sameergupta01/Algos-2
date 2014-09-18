#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>

using namespace std;

int getValue(char s[],int base)
{
    int value = 0;
    int i = 0;
    int len = strlen(s)-1;
    while(len >= 0 )
    {
              char *a= new char(1);
              a[0] = s[len];
            //  cout<<a[0]<<endl;
              if(isdigit(a[0]))
              {
                         int v = (int)pow(base,i)*atoi(a);
                         value +=v;                         
                         }
                         else
                         {
                             cout<<"ass"<<endl;
                             cout<<"atoi "<<atoi(a)<<endl;
                             cout<<"pow "<<pow(base,i)<<endl;
                         
                             int v = ((int)a[0] - (int)'a'+1)+9;
                             cout<<"v "<<v<<endl;
                             int f = (int)pow(base,i)*v;
                             cout<<"F "<<f<<endl;
                             value +=f;
                             
                             
                         }
                         i++;
                         len--;
              }
              cout<<" v "<<value<<endl;
              return value;
};

int main()
{
    char s[] = "10010";
    char g[] = "a1b";
    int sb = 2;
    int gb = 16;
    int v = getValue(s,sb);
    cout<<"base 2: "<<v<<endl;
    cout<<"base 16: "<<getValue(g,gb)<<endl;
    cout<<getch();
    return 0;
}
