# -*- coding: utf-8 -*-
"""
Created on Sun Oct 27 12:39:32 2019

@author: ANANTA SRIKAR
"""
MAX_INT = 10000

def maxSumSubArray(arr, size):
	
	maxTillNow = -MAX_INT - 1
	maxEndingHere = 0
	
	for i in range(0, size):
		
		maxEndingHere += arr[i]
		
		if (maxTillNow < maxEndingHere):
			maxTillNow = maxEndingHere
			
			
		if (maxEndingHere < 0):
			maxEndingHere = 0
			
	return maxTillNow

def main():
	a = [-2, -5, 6, -2, -3, 1, 5, -6] 
	print ('Maximum sum is ' + str(maxSumSubArray(a, len(a))))
	
if __name__ == '__main__':
	main()