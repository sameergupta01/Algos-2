#include <iostream>
#include <conio.h>

using namespace std;

int longestUniqueSubsttr(char s[])
{
    int len = strlen(s);
    if(len <=1)
    return len;
    int max_len = 0;
    int fi = 0;
    int fj = 0;

    for(int i=0;i<len;i++)
    {
            int hash[27] = {0};
            for(int j=i;j<len;j++)
            {
                    //cout<<"  "<<((int)s[j]-(int)'A')<<endl;
                    if( hash[((int)s[j]-(int)'A')] == 0)
                    {
                        hash[((int)s[j]-(int)'A')] = 1;
                        if(max_len < j-i){
                        max_len = j-i;
                        fi = i;
                        fj = j;
                        }
                    }
                    else
                    break;
                    }
            }
            for(int i = fi;i<=fj;i++)
            cout<<s[i];
            return max_len;
};



/* Driver program to test above function */
int main()
{
    char str[] = "GEEKSFORGEEKS";
    printf("The input string is %s \n", str);
    int len =  longestUniqueSubsttr(str);
    printf("The length of the longest non-repeating character substring is %d", len);
 
    getchar();
    return 0;
}
