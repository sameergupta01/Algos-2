#include <iostream>
#include <conio.h>

#define N 4


using namespace std;

void printMaze(int maze[N][N])
{
    int i, j;

    for(i=0; i < N; i++)
    {
        for(j=0; j < N; j++)
            printf("%d ", maze[i][j]);
        printf("\n");
    }
};

// x and y are coordinates with initial position as 0,0 and N-1,N-1 as final position
bool move(int maze[N][N],int sol[N][N],int x, int y)
{
            //cout<<getch();
            
     if(x > N-1 || x < 0)
      return false;
      
      if(y > N-1 || y <  0)
      return false;

    
     if(x == 0 && y == 0)
     {
          printMaze(sol);
          return true;
      }
      
      if(maze[x][y] == 0)
      return false;
      
      if(sol[x][y] == 1)
      return false;
      
      sol[x][y] = 1;
      if(move(maze,sol,x+1,y)) return true;
            if(move(maze,sol,x-1,y)) return true;
                  if(move(maze,sol,x,y+1)) return true;
                        if(move(maze,sol,x,y-1)) return true;
      // sol[x][y] = 0;

 }
 


int main()
{
    int maze[N][N] =
    {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int sol[N][N] = {0,};

    cout<<move(maze, sol, 3, 1);
    cout<<getch();
    return 0;
}
