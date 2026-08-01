noday=int(input("enter the number of days"))
rainlen=0
for i in range(0,noday):
   rainlen=0 
   rlen=int(input("enter captain"))
   while(rlen!=-1):
       rainlen+=rlen 
       rlen=int(input("enter captain"))
   print(f'the total rain for day {i+1} is {rainlen}')
     
