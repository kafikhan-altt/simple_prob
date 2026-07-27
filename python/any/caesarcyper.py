char='abcdefghijklmnopqrstuvqxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'

word=str(input("Enter the word to be encrypted: "))

len=len(word)
step=int(input("Enter the shift value: "))
cyc=""
for i in range(len):
    cyc=cyc+char[((char.index(word[i]))+step)%62]
print("Encrypted word: ",cyc)

