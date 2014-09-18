#include <iostream>
#include <conio.h>

using namespace std;

void expandArray(char s[],int n)
{
     char f_s[10];
     int f_n[10];
     int j = 0;
     char c;
     int cost = 0;
     while(*s != ' ')
     {
             c = *s;
             s++;
             char cc[5];
             int i = 0;
             while(isdigit(*s)){
             cc[i++] = *s;
             s++;
             }
             cost = atoi(cc);
            
            f_s[j] = c;
            f_n[j++] = cost;
            }
            runTimeExpansion(f_s,f_n);
      //      for(int i=0;i<10;i++)
        //    {
          //          cout<<"f_s "<<f_s[i]<<endl;
            //        cout<<"f_n "<<f_n[i]<<endl;
              //      }
     
 };
 
 void runTimeExpansion(char s[],int n[])
 {
      
  };

int main()
{
    char s[] = "a3b1c1d1e4f0g11                                                                                               ";
    int len = strlen(s);
    expandArray(s,len);
    cout<<getch();
    return 0;
}
