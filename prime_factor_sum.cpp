#include <iostream>
#include <conio.h>
#include <vector>


using namespace std;

//number between 1 and 1000 whose prime factor sum is also prime
int main()
{
    vector<int> v;
    for(int i=1;i*i<=1000;i++)
    v.push_back(i);
    int i = 2;
    int j = 2;
    vector<int>::iterator t;

       while(j<v.size())
       {
                        i = 2;
                       // cout<<"ij "<<i*j<<endl;
                       // cout<<"v[v.size()] "<<v[v.size()-1]<<endl;
                        while(i*j < v[v.size()-1]){                                  
                                   t=find(v.begin(),v.end(),i*j);
                         //          cout<<t[0];
                        if(t != v.end()){
                        v.erase(t);}
                        i++;
                        }
                        j++;
                        
                        }
                        
                        for(int i=1;i<=1000;i++)
                        for(int j=0;j<v.size();j++)
                        {
                                
                                }
                        
                        for(int k=0;k<v.size();k++)
                        cout<<v[k]<<"  ";
        
    cout<<getch();
    return 0;
}
