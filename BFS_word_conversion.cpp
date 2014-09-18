#include <iostream>
#include <conio.h>
#include <queue>
#include <set>

using namespace std;


int conversionDistance(string s,string e,set<string> dict)
{
    int slen = s.size();
    int elen = e.size();
    if(slen == 0 || elen == 0 || slen != elen)
    return -1;
    
    queue<string> q;
    set<string> un;
    q.push(s);
    q.push("dummy");
    int count = 0;
    while(!q.empty())
    {
                     string n = q.front();
                     q.pop();
                     cout<<"n "<<n<<" e "<<e<<endl;
                     if(n == e)
                     return count;
                     if(n == "dummy"){
                     count++;
                     }
                     else
                     {
                     for(int i=0;i<slen;i++)
                     {
                             string nn = n;                      
                             for(int j=0;j<26;j++)
                             {
                                     char temp = 'a'+j;
                                     nn[i] = temp;
                                    set<string>::iterator  t;
//                                     cout<<"nn "<<nn<<endl;
                                     for(t = dict.begin(); t!= dict.end();t++)
                                     cout<<*t<<endl;
                                     
                                     if(dict.find(nn) != dict.end() && un.find(nn) != un.end()){
                                                        cout<<"nnn "<<nn<<endl;
                                                   q.push(nn);                                                   
                                                   un.insert(nn);
                                                   }                                     
                                     }
                             }
                        q.push("dummy");
                     }
                     }
                     return -1;
};


int main()
{
    string start = "hit";
    string end = "cog";
    set<string> s;
    string dict[6] = {"hot","dot","dog","lot","log","cog"};
    for(int i=0;i<5;i++)
    s.insert(dict[i]);
    cout<<conversionDistance(start,end,s);
    cout<<getch();
    return 0;
}
