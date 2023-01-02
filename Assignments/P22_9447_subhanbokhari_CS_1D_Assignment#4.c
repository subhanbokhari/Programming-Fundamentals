#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool symmetric(int arr[4][4]);

int main()
{
  int arr[4][4];
  int arr2[4][4];
  int res[4][4];
  int test[5][5];
  int sum;
  int range=(20-10) + 1;
  int temp;
  bool check;

  srand(time(NULL));

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      arr[i][j] = rand() % range +10;
      arr2[i][j] = rand() % range + 10;
    }
  }

  printf("Matrix 1\n");

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  printf("Matrix 2\n");

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d  ",arr2[i][j]);            
    }
    printf("\n");
  }

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
        if (i==j)
        {
         temp = arr[i][j];
         arr[i][j]= arr2[i][j];
         arr2[i][j]=temp;
        }
    }
  }

  printf("\n");
  printf("Matrix 1 Diaognal changed\n");

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  printf("Matrix 2 Diaognal changed\n");


  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d  ",arr2[i][j]);            
    }
    printf("\n");
  }

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      res[i][j]=0;
    }
  }  

  
  for (int i = 0; i < 4; i++)
  {
   for (int j = 0; j < 4; j++) 
    {
     if(i==0 && j==0)
      {
       res[i][j] = (arr2[3][0]+arr2[3][1]+arr2[0][1]+arr2[1][1]+arr2[1][0]+arr2[1][3]+arr2[0][3]+arr2[3][3]);
      }
      if(i==3 && j==0)
      {
       res[i][j] = arr2[2][3]+arr2[2][0]+arr2[2][1]+arr2[3][1]+arr2[0][1]+arr2[0][0]+arr2[0][3]+arr2[3][3];
      }
      if(i==0 && j==3)
      {
        res[i][j] = arr2[3][2]+arr2[3][3]+arr2[3][0]+arr2[0][0]+arr2[1][0]+arr2[1][3]+arr2[1][2]+arr2[0][2];
      }
       if(i==3 && j==3)
      {
       res[i][j] = arr2[2][3]+arr2[2][0]+arr2[3][0]+arr2[0][0]+arr2[0][3]+arr2[2][3]+arr2[3][2]+arr2[2][2];
      }
       if(i!=0 || j!=0 || i!=3 || j!=3)
      {
        res[i][j]=(arr2[i-1][j+1]+arr2[i][j+1]+arr2[i+1][j+1]+arr2[i-1][j]+arr2[i+1][j]+arr2[i-1][j-1]+arr2[i][j-1]+arr2[i+1][j-1])/arr2[i][j];
      }
    }
  }

  printf("\n");
  printf("After The Formula\n");

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d  ",res[i][j]);            
    }
    printf("\n");
  }


  check=symmetric(res);

  if(check==false)
  {
    printf("\nIt is Symmetric.");
  }
  else if (check==true)
  {
   printf("\nIt is not Symmetric.");
  }
  return 0;

}

bool symmetric(int a[4][4])
{
  int trans[4][4];
  bool check=false;

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      trans[j][i]=a[i][j]; 
    }
  }

  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(trans[i][j] != a[i][j])
      {
        check = true;
        break;
      }
    }
  }
  return check;
}

