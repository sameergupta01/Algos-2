#include <iostream>
#include <conio.h>

using namespace std;

void printLIS(int arr[],int n)
{
     int l[8];
     int p[8];
     l[0] = 1;
     p[0] = -1;
     for(int i=1;i<n;i++)
     {
             l[i] = 1;
             p[i] = -1;
             
             for(int j=0;j<i;j++)
             {
                     if(arr[j] < arr[i] && l[i] < l[j]+1)
                     {
                               l[i] = l[j]+1;
                               p[i] = j;
                               }}
                               }
                               int max = l[0];
                               int max_index = 0;
                               for(int k=1;k<n;k++)
                               {
                                       if(l[k] > max){
                                       max = l[k];
                                       max_index = k;}
                                       }
             
             cout<<"Size of LIS: "<<max<<endl;
             cout<<"Numbers are: ";
             int i = max_index;
             for(int k=0;k<n;k++)
             { cout<<p[k]<<" ";}
             cout<<endl;
             
             while(p[i] != -1 && i >= 0)
             {
                        cout<<arr[i]<<"  ";
                        i = p[i];
                        }
                        cout<<arr[i];
             
             
     
 };

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printLIS(arr,8);
    cout<<getch();
    return 0;
}
