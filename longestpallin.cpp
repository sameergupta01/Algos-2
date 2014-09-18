#include <iostream>
#include <conio.h>

using namespace std;

int longestPalSubstr(char s[])
{
    int st = 0;
    int en = 0;
    int f_s = 0;
    int f_e = 0;
    int n = strlen(s);
    //two cases...even..centre..odd centre...
    for(int i=1;i<n-1;i++)
    {
            st = i-1;
            en = i+1;
         while((st >=0)&&(en < n)&&(s[st] == s[en]))
            {
                     st--;
                     en++;
                     }
                     if(f_e - f_s < en - st){
                     f_s = st;
                     f_e = en;}
                     
            st = i-1;
            en = i+2;
            while(st >=0 && en < n && s[i] == s[i+1] && s[st] == s[en])
            {
                     st--;
                     en++;
                     }
                     if(f_e - f_s < en - st){
                     f_s = st;
                     f_e = en;}
                     
           

            }
            cout<<f_s<<"  "<<f_e<<endl;
           for(int i= f_s;i<=f_e;i++)
                    cout<<s[i];
                    cout<<endl; 
                    return (f_e - f_s);

};


// Driver program to test above functions
int main()
{
    char str[] = "forgeeksskeegfor";
    printf("\nLength is: %d\n", longestPalSubstr( str ) );
    cout<<getch();
    return 0;
}
