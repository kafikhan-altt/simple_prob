empid=(input("enter the id:"))
while(empid!='-1'):
    trade=int(input("ente the trade amt"))
    prof_loss=0
    while(trade!=0):
          prof_loss = prof_loss + trade
          trade=int(input("ente the proforloss"))
    print(f'profit/loss for employee {empid} is {prof_loss}')
    empid=input('\n enter employee id')
