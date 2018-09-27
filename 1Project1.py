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

        if (gcd == 0):        # the base case
            print('count:',count)
            return n
        else:
            #avg += int(n)
            return euclids_algo(n, gcd, avg, count)

def consec_int_checking(m,n):
    print("This met here")
    
    temp = 0
    temp2 = 0
    t = 0
    original_n = int(n)
    
    if (int(n) > int(m)):
        swap = int(n)
        n = int(m)
        m = swap
        original_n = int(n)
        
        if (int(n) < int(m)):
            while (int(temp2) != 0):
                t = int(n)
                temp = int(m)%int(t)
                if (int(temp)==0):
                    temp2 = int(original_n)%int(t)
                    if (int(temp2) == 0 and int(temp) == int(temp2)):
                        print("Consecutive GCD:",t)
                        return t
                    else:
                        n -= 1
                else:
                    n -= 1
                    


def main():
    avg = 0
    count = 0
    eu_al_m = input("Please enter an integer for m: ")
    eu_al_n = input("Please enter an integer for n: ")

    out = euclids_algo(eu_al_m, eu_al_n, avg, count) # send the two numbers to the f