def max_sum(a): 
      
    tempMax = 0
    max = 0
      
    for i in range(0, len(a)): 
        max = max + a[i] 
        if max < 0: 
            max = 0
          
        elif (tempMax < max): 
            tempMax = max 
              
    return tempMax

lenArray = int(input("Enter size of array : "))
x = []

for i in range(0,lenArray):
    n = int(input("Enter the value : "))
    x.append(n)

print (max_sum(x))
