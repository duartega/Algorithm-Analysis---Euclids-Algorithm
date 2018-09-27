#include <iostream>
#include "gnuplot.h"

using namespace std;

int euclids_ago(int m, int n, int avg, int count){
  int gcd;
  

  if (n == 0)
    return 0;
  else
    {
      gcd = m % n;
      count += 1;
      
      if (gcd == 0)
	{
	  cout << "Count: " << count << endl;
	  return n;
	}
      else
	{
	  return euclids_ago(n, gcd, avg, count);
	}
    }
  //avg_euclid(count, 0);
  /*int avg_euclid(int count, int n)
{
  for (int i = n; i < count; i++)
    {
      i += i;
      
      return avg_euclid(count, i);
    }
}
  */
}


int consec_int_checking(int m, int n, int count)
{

  int temp = 0;
  int temp2 = 1;
  int t = 0;
  int original_n = n;

  if (n > m)
    {
      int swap = 0;
      swap = n;
      n = m;
      m = swap;
      original_n = n;
    }
  
  if (n < m)
    {

      while (temp2 != 0)
	{
	  t = n;
	  temp = m%t;
	  if (temp == 0)
	    {
	      temp2 = original_n%t;
	      if (temp2 == 0 && temp == temp2)
		{
		  cout << "T= " << t << endl;
		  return t;
		}
	      else
		{
		n --;
		}
	    }
	  else
	    n--;
	}
    }
}
int main() {

  int avg = 0;
  int count = 0;
  int eu_al_m = 0;
  int eu_al_n = 0;
  int out = 0;

  cout << "Please enter an integer for m: ";
  cin >> eu_al_m;
  cout << endl;
  cout << "Please enter an integer for n: ";
  cin >> eu_al_n;
  cout << endl;

  out = euclids_ago(eu_al_m, eu_al_n, avg, count);
  cout << "GCD: " << out << endl;

  consec_int_checking(eu_al_m, eu_al_n, count);
  return 0;
}
