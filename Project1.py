"""
Name    : Project 1
Date    : 09/23/2018
Authors : Gabriel Duarte, Elliot Newman
"""

# import libraries
#from __future__ import print_function
import numpy as np
import matplotlib.pyplot as plt

def euclids_algo(m,n, avg, count):

    if (int(n) == 0): # the base case
        return 0
    else:
        gcd = int(m) % int(n) # gets the remainder
        count += 1
        #avg += int(p)
        #print('avg:',avg)
        if (gcd == 0):        # the base case
            print('count:',count)
            return n
        else:
            #avg += int(n)
            return euclids_algo(n, gcd, avg, count)

def consec_int_checking(m,n):
    t = m # {m,n}
    if (int(m) / int(t) == 0):
        if (int(t) == int(n) / int(t)):
            return int(t)
        else:
            t-=t
    print(t)

def main():
    avg = 0
    count = 0
    eu_al_m = input("Please enter an integer for m: ")
    eu_al_n = input("Please enter an integer for n: ")

    out = euclids_algo(eu_al_m, eu_al_n, avg, count) # send the two numbers to the function
    print('GCD:', out)

    #consec_int_checking(eu_al_m, eu_al_n)


main()
