num =int(input("enter the num"))
absno=abs(num)

rev=absno%10
absno=absno//10   
while(absno>0):
        r=absno%10
        absno=absno//10
        rev=rev*10+r
if (num<0):
     rev=rev-rev*2
if (num==rev):  
    print("palindrome") 
else:
    print("not palindrome")
