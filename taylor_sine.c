#include "taylor_sine.h"
#include <assert.h>

long long fac(int a)
{
  long long b = 1;
  // assert(a < 0);

  if (a < 2)
  {
    b = 1;
  }
  else
  {
    for (int i = 2; i <= a; i++)
    {
      b *= i;
    }
  }
  return b;
}

double potens(double a, int b)
{
  double c = 1;
  //assert(b < 0);
  if (b == 0)
  {
    c = 1;
  }
  else
  {
    c = a;
    for (int i = 1; i < b; i++)
    {
      c = c * a;
    }
  }
  return c;
}

double taylor_sine(double x, int n)
{
  
  double resultat = 0.0;
  for (int i = 0; i <=  n; i++)
  {
    int power = 2 * i +1;
    int fortegn = (i % 2 == 0 ? 1 : -1);
    resultat += fortegn * potens(x, power) / fac(power);
  }
  return resultat;
}
/*
#include <math.h>
#include <stdio.h>
int main() {
 double pi = 3.14;
 printf("sin(pi) = %f\n", sin(pi));
 double svar = taylor_sine(pi, 10);
 printf("%f\n",svar);
return 0;
}
*/
/* Vi testet med 2, 5 og 10 som antall runder i taylorrekken vår, jo høyere tall vi la inn jo mer nøyaktig svar fikk vi. 
Når vi satt inn 10 fikk vi helt samme svar som sinus funskjonen til <math.h> */