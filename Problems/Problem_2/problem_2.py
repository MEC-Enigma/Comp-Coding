# -*- coding: utf-8 -*-
"""
Created on Sat Oct 26 18:53:36 2019

@author: ANANTA SRIKAR
"""

def f(n):
    
    if n == 1 or n == 2: 
        """Assuming the first two values are same as that of fibonacci"""
        return n-1
    else:
        return (f(n-1)**(n-1) + f(n-2)**(n-2))
    
def main():
    
    print('f(n) = f(n-1)^(n-1) + f(n-2)^(n-2)')
    n = int(input('Enter Nth term : '))
    val = f(n)
    print('f(' + str(n) + ') = ' + str(val))
    
if __name__ == '__main__':
    main()
    