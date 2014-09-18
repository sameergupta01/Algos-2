#include <iostream>
#include <conio.h>
#include <stack>

using namespace std;

int longestSubarrayWithKZero(int a[],int n,int k)
{
     if(n == 0)
     return 0;
     int i=0;
     int j=0;
     int len = INT_MAX;
     int count = 0;
     int n_i=0,n_j=0;
     while(i<n)
     {
               if(a[i] == 0)
               {
                       count++;
                       if(count == k)
                       {
                               cout<<"n_i "<<i<<" n_j "<<j<<endl; 
                               if(len > i-j) {
                                      n_i = i;
                                      n_j = j;
                              len = i-j;}
                              count = count-1;
                              while(a[++j] != 0);
                              }
                              
                       }
                       i++;
               }

               return len;
 };


int main()
{
    int a[] = {1, 1, 0, 1, 1, 0, 1, 1, 0,  0,  0,  0,  1,  0,  1,  1,  0,  0,  0,   1,  1,  0,  0};
    cout<<longestSubarrayWithKZero(a,23,6);
    cout<<getch();
    return 0;
}


