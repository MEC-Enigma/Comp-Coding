# -*- coding: utf-8 -*-
"""
Created on Sat Oct 26 20:56:42 2019

@author: ANANTA SRIKAR
"""

def fact(n):
	fact = 1
	while(n > 0):
		fact *= n
		n -= 1
	return fact

def sumOfDigits(n):
	SUM = 0
	while(n>0):
		digit = n % 10
		SUM += digit
		n = n // 10
	return SUM
		
def main():
	
	n = 78  #You can also input a number here
	print(str(n) + '! = ' + str(fact(n)))
	print('Sum of Digits = ' + str(sumOfDigits(fact(n))))

if __name__ == '__main__':
	main()	  