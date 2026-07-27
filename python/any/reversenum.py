num =int(input("enter the num"))
absno=abs(num)

if num>=0:
    rev=num%10
    num=num//10
    while(num>0):
        r=num%10
        num=num//10
        rev=rev*10+r
    print(rev)
else:
    rev=absno%10
    absno=absno//10   
    while(absno>0):
        r=absno%10
        absno=absno//10
        rev=rev*10+r
    print(rev-rev*2)
'''
if (n>0):
    rev=num%2
    num=num//10
    while(num>0):
       r=num%10
       num=num//10
       rev=rev*10+r

'''
    
    
        