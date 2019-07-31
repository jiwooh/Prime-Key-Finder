found = 0

i = int(input("Give the key of "))
if (i<2): sys.exit

minnum = int(input("Search from where to where? (integer)\n"))
maxnum = int(input("to\n"))

for k in range(minnum, maxnum+1, 1):
  a=i-k
  b=i-10*k
  n=round(a/b, 3)
  print ('When k =', k, ', a =', a, ', b =', b, ', so n =', n)

  if (n!=0 and n!=1 and n!=-1 and n%1==0):
    if (n>i/2): n-=i
    print('\n★ For k =', k, ',', i, '\'s key is', int(n), ':)')
    found = 1 
    break
    sys.exit
  #else:
    #print('\n')
if (found!=1):
  printf("None found in %d to %d :(", minnum, maxnum)
  sys.exit
