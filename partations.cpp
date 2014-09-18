#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <vector>
#include <set>

using namespace std;

void partation(int n)
{
     vector<int> v;
     v.push_back(n);
     int greater_one_index = 0;
     int one_index = 0;
//     set< vector<int> > s;

     
     while(true){
          bool isSolved = true;            
     for(int i = v.size()-1;i >= 0 ;i--)
     {
             
             if(v[i] > 1){
             isSolved = false;        
             greater_one_index = i;
             one_index = i+1;
             break;
             }
             }
             if(isSolved)
             return;
      
      int size = v.size() - 1;
      if(size > one_index)
      size = one_index;
      
      if(v.back() == 1 && (v[greater_one_index] - 1) > v.back())
      v[size] +=1;
      else
      v.push_back(1);
      v[greater_one_index] -= 1;
      for(int j=0;j<v.size();j++){
             // v.sort()
             // s.insert(v);
      cout<<v[j]<<"  ";}
      cout<<endl;
      }
 };

int main()
{
    int n = 6;
    partation(n);
    cout<<getch();
    return 0;
};
