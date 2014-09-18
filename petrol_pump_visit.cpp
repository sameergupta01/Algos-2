#include <iostream>
#include <conio.h>
#include <queue>


using namespace std;

struct petrolPump
{
       int petrol;
       int dist;
       };
       
int finalValue(petrolPump p)
{
    return p.petrol - p.dist;
}
    

void tourStart(petrolPump arr[],int count)
{
     int start = 0;
     int current = 0;
     queue<int> s;
     s.push(finalValue(arr[start]));
     current = finalValue(arr[start]);
     while(s.size() != 0 && s.size() != count && start < count)
     {
                 while(current < 0 && s.size() != 0)
                 {
                               current -=s.front();
                               s.pop();
                               }
                                    s.push(finalValue(arr[++start]));
                 }
                 if(s.size() == count)
                 cout<<s.front()<<endl;
                 if(s.size() == 0)
                 cout<<"No valid path"<<endl;
     
 };


int main()
{
    struct petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};
    int elements = sizeof(arr)/sizeof(arr[0]);
    tourStart(arr,elements);    
    cout<<getch();
    return 0;
}
