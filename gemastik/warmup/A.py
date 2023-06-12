n = int(input())
lenP = []
lenL = []
fold = []

for i in range(0, n):
  lenP[i] = int(input())
  lenL[i] = int(input())
  fold[i] = int(input())

for i in range(0, n):
  print(lenP[i], lenL[i], fold[i])
