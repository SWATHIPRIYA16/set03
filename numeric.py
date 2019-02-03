def isNumber(s) : 
      
    for i in range(len(s)) : 
        if s[i].isdigit() != True : 
            return False
  
    return True
  
# Driver code 
if __name__ == "__main__" : 
  
    # Store the input in a str variable 
    str=input()
  
    if isNumber(str) : 
        print("Yes") 
  
    else : 
        print("No")
