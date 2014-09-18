#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

 
 char *reverse(char *s,int st,int en)
 {
      int len = en-st;
      cout<<"end "<<en<<" st "<<st<<endl;
      char *p = new char(len);
      int i=0;
      while(len >= 0)
      {
                p[i++] = s[en--];
                len--;
                }
                p[i] = '\0';
                cout<<p<<endl;
                 return p;
  };
 
 char *reverse(char *s)
 {

      int len = strlen(s);
      char *p = new char(len);
      int i=0;
      while(len > 0)
      {
                p[i++] = s[len-1];
                len--;
                }
                p[i] = '\0';
                 return p;
  };


char *rString(char *s)
{
     return reverse(s);
     
 };
 
 char *rWord(char *s)
 {
      char *g = reverse(s);
      cout<<"g"<<g<<endl;
      char *p = new char(strlen(s));
      p[0] = '\0';
      int st = 0;
      int en = 0;
      while(g[en] != '\0')
      {
                  //cout<<g[en]<<endl;
                 if(g[en] == ' ')
                 {
                         strcat(p,reverse(g,st,en-1));
                         st = en+1;
                         }
                         en++;
                         
                 }
                         strcat(p,reverse(g,st,en-1));
                 
                 
                 return p;
      
  };
 


int main()
{
    char *s = "Sameer is awesome";
//    cout<<rString(s)<<endl;
    cout<<rWord(s)<<endl;
    cout<<getch();
    return 0;
}
