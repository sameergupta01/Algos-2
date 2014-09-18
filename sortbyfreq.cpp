#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

int compare(const void *a,const void *b)
{
    int *aa = (int*)a;
    int *bb = (int *)b;
    return *aa-*bb;
};

int compare1(const void *a,const void *b)
{
    int (*aa) = (int *)a;
    int (*bb) = (int *)b;
    if(aa[0] > bb[0]) return 1;
    if(aa[0] < bb[0]) return -1;
    else return 0;
};

void sortByFrequency(int a[],int n)
{
     if(n <=2)
     return;
     // O(nlgn)
     qsort(a,n,sizeof(int),compare);
     int unique = 0;
     int current = a[0];
     for(int i=1;i<n;i++)
     if(a[i] != current)
     {
             current = a[i];
             unique++;
             }
             int b[unique][2];
             int  u=  unique;
             current = a[0];
             int count = 1;
             int x = 0;
             for(int i=1;i<n;i++)
             if(a[i] != current)
             {
                     b[x][0] = current;
                     b[x++][1] = count;
                     current = a[i];
                     count = 1;
                     }
                     else
                     {
                         count++;
                     }
                     
                     if(b[x-1][0] != current){
                     b[x][0] = current;
                     b[x++][1] = count;}
                     
                     
                     qsort(b,unique,sizeof(b[0]),compare1);
     //bubble sort
     // O(n2)
//     for(int i=0;i<=unique;i++)
//     {
//             for(int j=i;j<=unique;j++)
//             {
//                     if(b[i][1] < b[j][1])
//                     {
//                                        int  temp_num = b[i][0];
//                                        int temp_count = b[i][1];
//                                        b[i][0] = b[j][0];
//                                        b[i][1] = b[j][1];
//                                        b[j][0] = temp_num;
//                                        b[j][1] = temp_count;
//                                        }                                        
//
//                                  }
//                     }

     
     
     
     for(int i=0;i<=unique;i++)
     {
             cout<<b[i][0]<<" "<<b[i][1]<<endl;
             }
     
     
     };

void printArray(int a[],int n)
{
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";   
 }

int main()
{
    int a[] =  {2, 5, 2, 8, 5, 6, 8, 8};
    sortByFrequency(a,8);    
    printArray(a,8);
    cout<<getch();
    return 0;
}
