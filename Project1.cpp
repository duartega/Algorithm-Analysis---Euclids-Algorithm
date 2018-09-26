#include <iostream>

using namespace std;

int euclids_ago(int m, int n, int avg, int count){
  int gcd;

  if (n == 0)
    return 0;
  else
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

int consec_int_checking(int m, int n)
{
  int temp = 0;
  int temp2 = 0;
  int t = 0;
  if (n < m)
    {
      while (temp != temp2)
	{
	  t = n;
	  cout << "t = " << t << endl;
	  temp = n/t;
	  cout << "temp = " << temp << endl;
	  if (isdigit(temp))
	    {
	      cout << "This made it\n";
	      temp2 = m/t;
	    }
	  n -=1;
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

  consec_int_checking(eu_al_m, eu_al_n);
  return 0;
}
