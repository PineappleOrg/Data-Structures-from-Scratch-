def knapSack(W , wt , val , n): 
  
    if n == 0 or W == 0 : 
        return 0
    
    if (wt[n-1] > W): 
        return knapSack(W , wt , val , n-1) 
  

    else: 
        return max(val[n-1] + knapSack(W-wt[n-1] , wt , val , n-1), 
                   knapSack(W , wt , val , n-1)) 
  
 
val = [10,5,15,7,6,18,3] 
wt = [2,3,5,7,1,4,1] 
W = 15
n = 7
print("THE ANSWER IS --")
print(knapSack(W , wt , val , n))
