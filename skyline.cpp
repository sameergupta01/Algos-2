#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

void getSkyLine(int a[8][3])
{
    int h[1000] = {0};
    for(int i=0;i<8;i++)
    {
            for(int j=a[i][0];j<a[i][2];j++)
            {
                    if(a[i][1] > h[j])
                    h[j] = a[i][1];
                    }
            }
            int existing = 0;
            for(int i=0;i<1000;i++)
            {
                    if(h[i] != existing)
                    {
                            cout<<i<<"  "<<h[i]<<"   ";
                            existing = h[i];
                            }
                    
                    }
                    
 };


int main()
{
    int a[8][3] = {{1,11,5},
                   {2,6,7},
                   {3,13,9},
                   {12,7,16},
                   {14,3,25},
                   {19,18,22},
                   {23,13,29},
                   {24,4,28}};
    getSkyLine(a);
    cout<<getch();
    return 0;
}
