#include <iostream>
#include <conio.h>

#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

using namespace std;


struct trie
{
       int value;
       trie *child[26];
       };
       
struct start
{
       trie *root;
       int count;
       };
       
       
trie *getnode()
{
     trie *t = new trie();
     t->value = 0;
     for(int i=0;i<26;i++)
     t->child[i] = NULL;
     return t;
     };
     
     
     void insert(char s[],start *tr)
     {
          int len = strlen(s);
          trie *t = tr->root;
          t->count++;
          for(int i=0;i<;len;i++)
          {
                  if(!t->child[i])
                  t = t->child[i];
                  else
                  {
                  t->child[i] = getnode();
                  t->value = 0;                  
                  }
                  
                  }
                  t->value = t->count;
      };
      
      bool search(char s[],start *tr)
      {
           int len = strlen(s);
           trie *t = tr->root;
           int index = 0;
           for(int i=0;i<len;i++)
           {
                   index = CHAR_TO_INDEX(s[level]);        
                   if(!t->child[index])
                   return false;
                   else
                   {
                       t = t->child[index];
                   }
                   return t->value;
       };
