#include <iostream>
#include <conio.h>
#include <bitset>

#define HASH_SIZE 128

using namespace std;


// A utility function to print a 2D array of size nr x nc and base address A
void Print2DArray(char *A, int nr, int nc)
{
    for(int r = 0; r < nr; r++)
    {
        for(int c = 0; c < nc; c++)
            printf("%c", *(A + r*nc + c));
 
 //       printf("\n");
    }
 
   // printf("\n\n");
}


// Non-square matrix transpose of matrix of size r x c and base address A
void MatrixInplaceTransposem(int *A, int r, int c)
{
    int size = r*c - 1;
    int t; // holds element to be replaced, eventually becomes next element to move
    int next; // location of 't' to be moved
    int cycleBegin; // holds start of cycle
    int i; // iterator
    bool b[1000] = {0}; // hash to mark moved elements
 
//    b.reset();
    b[0] = b[size] = 1;
    i = 1; // Note that A[0] and A[size-1] won't move
    while (i < size)
    {
        cycleBegin = i;
        t = A[i];
        do
        {
            // Input matrix [r x c]
            // Output matrix 1
            // i_new = (i*r)%(N-1)
            next = (i*r)%size;
            swap(A[next], t);
            b[i] = 1;
            i = next;
        }
        while (i != cycleBegin);
 
        // Get Next Move (what about querying random location?)
        for (i = 1; i < size && b[i]; i++)
            ;
        cout << endl;
    }
}

void MatrixInplaceTranspose(char A[],int r,int c)
{
     int i = 1;
     bool b[1000] = {false};
     b[0] = b[r*c -1] = true;
     while(i < r*c - 1)
     {
             int beg = i;
             char t = A[i];
             do
             {
                 int n = (i*r)%(r*c-1);
                 swap(A[n],t);
                 b[i] = 1;
                 i = n;
                   
               }
               while( i != beg);
//               / Get Next Move (what about querying random location?)
        for (i = 1; i < (r*c -1) && b[i]; i++);
    //    cout << endl;
             }
 };


// Driver program to test above function
int main(void)
{
    int r = 5, c = 6;
    int size = r*c;
    char A[] = "a1b2c3d4e5f6g7h8i9j1k2l3m4";
 
    Print2DArray(A, r, c);
    MatrixInplaceTranspose(A, r, c);
    Print2DArray(A, c, r);
    cout<<getch();
 
   // delete[] A;
 
    return 0;
}
