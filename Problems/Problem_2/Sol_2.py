# -*- coding: utf-8 -*-
"""
Created on Sat Oct 26 18:53:36 2019

@author: ANANTA SRIKAR
"""

def fibonacci(n):
    
    if n == 1 or n == 2: """Assuming the first two values are same as that of fibonacci"""
        return n-1
    else:
        return (fibonacci(n-1)**(n-1) + fibonacci(n-2)**(n-2))
    
def main():
    
    n = int(input('Enter Nth term : '))
    fib = fibonacci(n)
    print(fib)
    
if __name__ == '__main__':
    main()
    