/* Enter your solutions in this file */
#include <stdio.h>
int max (int number[], int n)
{
  int maxn=number[0];
  for(int i=0;i<n;i++)
  {
    if(number[i]>maxn)
      maxn=number[i];
  }
  return(maxn);
}
int min (int numb[], int n)
{
  int minx=numb[0];
  for(int j=0;j<n;j++)
  {
    if(numb[0]<minx)
    minx=numb[j];
  }
  return(minx);
}

