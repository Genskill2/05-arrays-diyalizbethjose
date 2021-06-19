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
int min (int numb[], int p)
{
  int minx=numb[0];
  for(int j=0;j<p;j++)
  {
    if(minx>numb[j])
    minx=numb[j];
  }
  return(minx);
}
float average(int numbs[], int q)
{
  float avg=0.0;
  for(int k=0;k<q;k++)
  {
    avg+=numbs[k];
  }
  avg=avg/q;
  return(avg);
}
int mode(int nu[], int a)
{
  int maxvalue=0; 
  int maxcount=0;
  for(int i=0;i<a;i++)
  {
    int count=0;
    for(int j=0;j<a;j++)
    {
      if(nu[j]==nu[i])
        count++;
    }
    if(count>maxcount)
    {
      maxcount=count;
      maxvalue=nu[i];
    }
  }
  return(maxvalue);
}
int factors(int n, int num[])
{
  int prime,k=0,p=0;
  for(int i=2;n>1;i++)
  {
    while(n % i==0)
    {
     num[k]=i;
      k++;
      n=n/i;
      p++;
    }
  }
  return(p);
}


