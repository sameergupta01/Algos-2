#include <iostream>
#include <conio.h>

using namespace std;

int lengthOfIncreasingSubstring(int *a,int len)
{
    int *output = new int(len);
    output[0] = 1;
    for(int i=1;i<len;i++)
    {
            int max = 0;
            for(int j=0;j<=i;j++)
            {
                    if(a[j] < a[i] && output[j] > max)
                    max = output[j];
                    }
                    output[i] = max+1;
            }
            int max_temp = 0;
            int index = 0;
            for(int i =0;i<len;i++)
            {
                    if(max_temp < output[i]){
                    max_temp = output[i];
                    index = i;}
                    }
                    int prev = index;
                    for(int i=index-1;i>=0;i--)
                    {
                            cout<<" i "<<a[i];
                            if(a[i]< a[prev]){
                            cout<<a[prev]<<" ";
                            prev = i;
                            }
                            }
                    cout<<endl;
                    return max_temp;
    
    
    
};

int main()
{
    int a[] = {7, 2, 3, 1, 5, 8, 9, 6};
    cout<<lengthOfIncreasingSubstring(a,8)<<endl;
    cout<<getch();
    return 0;
}
