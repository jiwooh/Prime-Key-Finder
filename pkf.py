import sys
found = 0

p = int(input("Give the key of "))
if (p<2): sys.exit()

minnum = int(input("Search from where to where? (integer)\n"))
maxnum = int(input("to\n"))

for k in range(minnum, maxnum+1, 1):
  a=p-k
  b=p-10*k
  n=round(a/b, 6)
  print('When k =', k, ', a =', a, ', b =', b, ', so n =', n)

  if (n!=0 and n!=1 and n!=-1 and n%1==0):
    if (n>p/2): n-=p
    print('\n★ For k =', k, ',', p, '\'s key is', int(n), ':)')
    found = 1 
    break
    sys.exit()
  #else:
    #print('\n')
if (found!=1):
  print('None found in', minnum, 'to', maxnum, ':(')
  sys.exit()
