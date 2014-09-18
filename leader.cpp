#include <iostream>
#include <conio.h>

using namespace std;

void printLeaders(int a[],int n)
{
     for(int i=0;i<n-1;i++)
     {
             bool isLeader = true;
             for(int j=i+1;j<n-1;j++)
             {
                     if(a[i]<a[j])
                     {
                                 isLeader = false;
                                 break; 
                                  }
                                  
                     }
                     if(isLeader)
                     cout<<a[i]<<"  ";
             }
             cout<<a[n-1];
 };
 
 
 void printLeadersinOnePass(int a[],int n)
 {
      int local_max = INT_MIN;
      for(int i=n-1;i>=0;i--)
      {
              if(local_max < a[i]){
              cout<<a[i]<<"  ";
              local_max = a[i];}
              }
  };


/*Driver program to test above function*/
int main()
{
  int arr[] = {16, 17, 4, 3, 5, 2};
  printLeadersinOnePass(arr, 6);
  getchar();    
  return 0;
}  
