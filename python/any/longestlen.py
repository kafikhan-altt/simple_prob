'''
sentence=input("enter the sentence")
high=0
count=0
for k in sentence:
    if k!=' ':
        count+=1
    else:
        if count>high:
            high=count
        count=0
if count > high:
    high = count
print(high)


for word in sentence.split():
    if word == '-1':
        break
    if len(word)>high:
        high=len(word)
print(high)
'''
#example of while loop

word=input("enter the word")
maxlen=0
while (word!='-1'):
    count=0
    for letter in word:
            count+=1
    if count>maxlen:
         maxlen=count
word=input("enter the word")
print(f'the longest length is {maxlen}') 
