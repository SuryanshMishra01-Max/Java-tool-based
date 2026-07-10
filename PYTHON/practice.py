a = 121
b = a//10     #12   #121
c = a%10   #1  
d = b%10  #2
e = b//10 #1
rev = e*100+d*10+c
if (rev == a):
 print("palindrome")
 

