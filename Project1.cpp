#include <iostream>

using namespace std;
int global_count = 0;
int global_count2 = 0;


int euclids_ago(int m, int n, int count, int done)
{
        int gcd;

        if (n == 0)
                return 0;
        else
        {
                gcd = m % n;

                count += 1;


                if (gcd == 0)
                {
                        if (done == 0) {
                                cout << "Count: " << count << endl;
                                global_count = count;
                        }
                        return n;
                }
                else
                {
                        if (done == 0)
                                euclids_ago(n, gcd, count, 0);
                        else
                                euclids_ago(n, gcd, count, 1);
                }
        }
}

int consec_int_checking(int m, int n, int count, int done)
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
                                        if(done == 0)
                                        {
                                                cout << "T= " << t << endl;
                                                global_count2 = t;
                                                cout << global_count2 << endl;
                                        }
                                        return t;
                                }
                                else
                                {
                                        n--;
                                }
                        }
                        else
                                n--;
                }
        }
}



float euclids_avg(int sCount)
{
        int array[sCount];
        int rec = 1;
        for(int i=0; i < sCount; i++)
        {
                array[i] = euclids_ago(sCount, i, 0, rec);
                rec++;
        }
        float avg = 0.0;
        int total = 0;

        for (int j = 0; j < sCount; j++)
        {
                total +=array[j];
        }

        avg = (float)total / (float)sCount;

        return avg;

}


float consec_avg(int sCount)
{
        int array[sCount];
        int rec = 1;
        for(int i=0; i < sCount; i++)
        {
                array[i] = consec_int_checking(sCount, i+1, 0, rec);
                rec++;



        }
        float avg = 0.0;
        int total = 0;

        for (int j = 0; j < sCount; j++)
        {
                total +=array[j];
        }

        avg = (float)total / (float)sCount;

        return avg;

}


int main() {


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

        out = euclids_ago(eu_al_m, eu_al_n, count, 0);

        cout << "GCD: " << out << endl;

        float output2 = euclids_avg(global_count);
        cout << "Average of Euclid's Algoithm is: " << output2 << endl;

        int output3 = consec_int_checking(eu_al_m,eu_al_n,count, 0);

        float output4 = consec_avg(global_count);
        cout << "Average of Consecutive Integers is: " << output4 << endl;


        out = consec_int_checking(eu_al_m, eu_al_n, count);
        cout << "Consecutive GCD: " << out << endl;

        return 0;
}
