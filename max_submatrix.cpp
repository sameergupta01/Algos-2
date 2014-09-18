#include <iostream>
#include <conio.h>

using namespace std;

int min(int a,int b){
if(a>b) 
return b;
else
return a;
}

void maxMatrix(int m[][5],int n,int c)
{
     int s[6][5];
     for(int i=0;i<n;i++)
     s[i][0] = m[i][0];
     
     for(int j=0;j<c;j++)
     s[0][j] = m[0][j];
     
     for(int i=1;i<n;i++)
     {
             for(int j=1;j<c;j++)
             {
                     if(m[i][j] != 0)
                     s[i][j] = min(s[i-1][j-1],min(s[i-1][j],s[i][j-1]))+1;
                     else
                     s[i][j] = 0;
                     }
                     }
                     int max_i=0;
                     int max_j = 0;
                     int max_value = 0;
                     
                     for(int i=0;i<n;i++)
                     {
                             for(int j=0;j<c;j++)
                             {
                                             if(max_value < s[i][j]){
                                             max_value = s[i][j];
                                             max_i = i;
                                             max_j = j;}
                                             }
                                             }
                     for(int i=max_i;i > max_i - max_value;i--){
                             for(int j=max_j;j>max_j-max_value;j--)
                             {
                                     cout<<" "<< m[i][j];}
                                     cout<<endl;}
     
     
     
 };

int main()
{
    int m[][5] = {{0,  1,  1,  0,  1}, 
   {1,  1  ,0,  1  ,0 },
   {0 , 1  ,1 , 1  ,0},
   {1  ,1  ,1  ,1  ,0},
   {1  ,1 , 1  ,1 , 1},
   {0  ,0,  0  ,0,  0}};
   maxMatrix(m,6,5);
    cout<<getch();
    return 0;
}
